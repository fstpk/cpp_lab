#include <iostream>

int* inputData(int* sizePointer) {
	std::cout << "Enter array size: ";
	int size;
	std::cin >> size;
	while (size < 0) {
		std::cout << "Enter again:"; std::cin >> size;
	}
	*sizePointer = size;
	int* array = new int[size];
	for (int i = 0; i < size; ++i) {
		array[i] = i + 1;
	}
	return array;
}

void someFunction(int array[], int size) {
	int i, j, k;
	for (int i = 0, j = size-1; i < j; i++, j--) {
	// for (int i = 0, j = (size-1)/2 ; i < j; i++, j--) { //for fun :3
		k = array[i];
		array[i] = array[j];
		array[j] = k;
	}
}

int main() {
	int size;
	int* array = inputData(&size);
	someFunction(array, size);
	for (int i = 0; i < size; ++i) {
		std::cout << array[i] << " ";
	}
	std::cout << std::endl;
	delete[] array;
	return 0;
}
