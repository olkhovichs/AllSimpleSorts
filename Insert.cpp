#include "Insert.h"

void sortInsert(std::array<int, 100>& array) {
	int temp;
	int i, j;
	for (i = 0; i < array.size(); i++) {
		temp = array[i];
		j = i - 1;
		for (j = i - 1; j >= 0 && array[j] > temp; j--) {
			array[j + 1] = array[j];
		}
		array[j + 1] = temp;
	}
}