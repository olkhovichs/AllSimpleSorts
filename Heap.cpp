#include "Heap.h"

void creatureHeap(std::array<int, 100>* array, int root, int bottom) {
	int maxChild;
	int flag = 0;
	while ((root * 2 <= bottom) && (!flag)) {
		if (root * 2 == bottom) {
			maxChild = root * 2;
		}
		else if ((*array)[root * 2] > (*array)[root * 2 + 1]) {
			maxChild = root * 2;
		}
		else {
			maxChild = root * 2 - 1;
		}
		if ((*array)[root] < (*array)[maxChild]) {
			std::swap((*array)[root], (*array)[maxChild]);
		}
		else {
			flag = 1;
		}
	}
}

void sortHeap(std::array<int, 100>* array) {
	for (int i = (array->size() / 2) - 1; i >= 0; i--) {
		creatureHeap(array, i, array->size() - 1);
	}
	for (int i = array->size() - 1; i >= 1; i--) {
		std::swap((*array)[i], (*array)[0]);
		creatureHeap(array, 0, i - 1);
	}
}