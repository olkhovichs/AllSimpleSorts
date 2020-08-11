#include "Bubble.h"
#include "Shaker.h"
#include "Comb.h""
#include "Insert.h"
#include "Shell.h"
#include "Choice.h"
#include "Heap.h"
#include "Quick.h"
#include "Merge.h"

#include <iostream>
#include <array>
#include <ctime>
#include <iomanip>

void printArray(std::array<int, 100> array);

void printArray(std::array<int, 100> array) {
	for (int i = 0; i < array.size(); i++) {
		std::cout << std::setw(5) << array[i];
	}
	std::cout << std::endl;
}

int main()
{
	std::array<int, 100> arr;

	std::srand(std::time(nullptr));
	for (int i = 0; i < arr.size(); i++) {
		arr[i] = 1 + rand() % 1000;
	}

	std::cout << "Unsorted array:" << std::endl;
	printArray(arr);

	//sortBubble(&arr);
	//sortShaker(&arr);
	//sortComb(&arr);
	//sortInsert(&arr);
	//sortShell(&arr); 
	//sortChoice(&arr);
	//sortHeap(&arr);
	//sortQuick(&arr, 0, arr.size() - 1);
	sortMerge(&arr, 0, arr.size() - 1);
	std::cout << "Sorted array:" << std::endl;
	printArray(arr);
	
	return 0;
}