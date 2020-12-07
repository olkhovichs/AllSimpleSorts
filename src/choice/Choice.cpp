#include "Choice.h"

void sortChoice(std::array<int, 100>* array) {
	int min;
	for (int i = 0; i < array->size(); i++) {
		min = i;
		for (int j = i + 1; j < array->size(); j++) {
			if ((*array)[j] < (*array)[min]) {
				min = j;
			}
		}
		std::swap((*array)[i], (*array)[min]);
	}
}
