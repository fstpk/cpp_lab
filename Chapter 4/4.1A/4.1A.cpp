#include <iostream>
#include <cmath>

struct desu {
	int a;
	int b;
	float perimeter;
	float volume;

};

void forEach (desu* array, int size, void(*visitor)(desu*)) {
	for (int i = 0; i < size; ++i) {
		visitor(array++);
	}
}

void inputElement (desu* element) {
	std::cin >> (element->a) >> (element->b);
}

void outputElement (desu* element) {
	std::cout << (element->a) << " " << (element->b) << " " << (element->perimeter) << " " << (element->volume) << std::endl;
}

void fillPerimeter (desu* element) {
	element->perimeter = (element->a) + (element->b) + hypotf((element->a), (element->b));
}

void fillVolume(desu* element) {
	element->volume = (element->a) * (element->b) * (element->perimeter);
}

void bubbleSort(desu* array, int size) {
	for (int i = size - 1; i > 0; i--) {
		for (int j = 0; j < i; j++) {
			if (array[j].b > array[j+1].b) {
				desu tmp = array[j];
				array[j] = array[j+1];
				array[j+1] = tmp;
			}
		}
	}
}

int main() {
	int size;
	std::cin >> size;
	desu* array = new desu[size];
	forEach(array, size, inputElement);
	forEach(array, size, fillPerimeter);	
	forEach(array, size, fillVolume);
	bubbleSort(array, size);
	forEach(array, size, outputElement);
	delete[] array;
	return 0;
}
