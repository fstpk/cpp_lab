#include <iostream>

int main() {
	std::cout << "Enter array size: ";
	int size;
	std::cin >> size;
	while (size < 0) {
		std::cout << "Enter again:"; std::cin >> size;
	}
	int* array = new int[size];

	for (int i = 0; i < size; ++i) {
		array[i] = (i + 1) * 2;
	}

	for (int i = 0; i < size; ++i) {
		if ((array[i] % 4) == 0) {
			std::cout << array[i] << " ";
		}
	}

	std::cout << std::endl;
	delete[] array;
	return 0;
}
