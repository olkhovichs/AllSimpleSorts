#include "Quick.h"

void sortQuick(std::array<int, 100>* array, int begin, int end) {
	int left = begin, right = end;
	int pivot = (*array)[(left + right) / 2];
	while (left <= right) {
		while ((*array)[left] < pivot) {
			left++;
		}
		while ((*array)[right] > pivot) {
			right--;
		}
		if (left <= right) {
			std::swap((*array)[left++], (*array)[right--]);
		}
	}
	if (begin < right) {
		sortQuick(array, begin, right);
	}
	if (end > left) {
		sortQuick(array, left, end);
	}
}