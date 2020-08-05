#include "Shell.h"

void sortShell(std::array<int, 100>* array) {
	int incr;
	int temp;
	for (incr = array->size() / 2; incr > 0; incr /= 2) {
		int j;
		for (int i = incr; i < array->size(); i++) {
			temp = (*array)[i];
			for (j = i; j >= incr; j -= incr) {
				if (temp < (*array)[j - incr]) {
					std::swap((*array)[j], (*array)[j - incr]);
				}
				else {
					break;
				}
			}
		}
		(*array)[j] = temp;
	}
}