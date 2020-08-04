#include "Comb.h"


int getNextGap(int gap) {
	gap = (gap * 10) / 13;
	if (gap < 1) {
		return 1;
	}
	return gap;
}

void sortComb(std::array<int, 100>& array) {
	int gap = array.size();
	bool swapped = true;
	while (gap != 1 || swapped == true) {
		gap = getNextGap(gap);
		swapped = false;
		for (int i = 0; i < array.size() - gap; i++) {
			if (array[i] > array[i + gap]) {
				std::swap(array[i], array[i + gap]);
				swapped = true;
			}
		}
	}
}