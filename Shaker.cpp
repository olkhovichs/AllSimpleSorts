#include "Shaker.h"

void sortShaker(std::array<int, 100>* array) {
	int left = 0;
	int right = array->size() - 1;
	while (left < right) {
		for (int i = left; i < right; i++) {
			if ((*array)[i] > (*array)[i + 1]) {
				std::swap((*array)[i], (*array)[i + 1]);
			}
		}
		right--;
		for (int i = right; i > left; i--) {
			if ((*array)[i - 1] > (*array)[i]) {
				std::swap((*array)[i - 1], (*array)[i]);
			}
		}
		left++;
	}
}