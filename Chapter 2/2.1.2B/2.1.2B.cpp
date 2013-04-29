#include <iostream>

int* inputData(int* sizePointer) {
	std::cout << "Enter array size: ";
	int size;
	std::cin >> size;
	while (size < 0) {
		std::cout << "Enter again:"; std::cin >> size;
	}
	// C++. It's magic.
	*sizePointer = size;
	int* array = new int[size];
	for (int i = 0; i < size; ++i) {
		array[i] = i + 1;
	}
	return array;
}

void invertData(int* array, int size) {
	int halfSize = size / 2;
	for (int i = 0; i < halfSize; ++i) {
		int temp;
		temp = array[i];
		array[i] = array[size - i - 1];
		array[size - i - 1] = temp;
	}
}

int main() {
	int size;
	// C++. It's magic part 2.
	int* array = inputData(&size);
	//invertData... - normal output
	invertData(array, size);
	for (int i = 0; i < size; ++i) {
		std::cout << array[i] << " ";
	}
	std::cout << std::endl;
	delete[] array;
	return 0;
}