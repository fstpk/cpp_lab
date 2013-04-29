#include <iostream>

//указатель на int
int* inputArray() {
	int* array = new int[10];
	for (int i = 0; i < 10; ++i) {
		std::cout << "Enter [" << i << "] char (" << 10-i << " left):";
		std::cin >> array[i];
	}
	return array;
}

int zeroCount(int *array) {
	int counter = 0;
	for (int j = 0; j < 10; ++j) {
		if (array[j] == 0) {
			++counter;
		}
	}
	return counter;
}

int main() {
	int* mainArray = inputArray();
	std::cout << std::endl << "'Null' elements: " << zeroCount(mainArray) << std::endl;
	delete[] mainArray;
	return 0;
}