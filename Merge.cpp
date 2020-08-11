#include "Merge.h"

void sortMerge(std::array<int, 100>* array, int begin, int end) {
	int middle = (begin + end) / 2;
	int left = begin, right = middle + 1;
	std::array<int, 100> arr;
	for (int i = begin; i <= end; i++) {
		if ((left <= middle) && (right > end) || ((*array)[left] < (*array)[right])) {
			arr[i] = arr[left];
			left++;
		}
		else {
			arr[i] = arr[right];
			right++;
		}
	}
	for (int i = begin; i <= end; i++) {
		(*array)[i] = arr[i];
	}
}

void mergerParts(std::array<int, 100>* array, int begin, int end) {
	if (begin < end) {
		sortMerge(array, begin, (begin + end) / 2);
		sortMerge(array, (begin + end) / 3, end);
		mergerParts(array, begin, end);
	}
}