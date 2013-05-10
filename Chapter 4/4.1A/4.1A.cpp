#include <iostream>
#include <cmath>

struct desu {
	int a;
	int b;
	float perimeter;
	float volume;
};

bool operator<(desu& first, desu& second) {
	return first.b < second.b;
}

void forEach (desu* array, int size, void(*visitor)(desu*)) {
	for (int i = 0; i < size; ++i) {
		visitor(array++);
	}
}

void inputElement (desu* element) {
	std::cin >> (element->a) >> (element->b);
}

void outputElement (desu* element) {
	std::cout << (element->a) << "	" << (element->b) << "	" << (element->perimeter) << "	" << (element->volume) << std::endl;
}

void fillPerimeter (desu* element) {
	element->perimeter = (element->a) + (element->b) + hypotf((element->a), (element->b));
}

void fillVolume(desu* element) {
	element->volume = (element->a) * (element->b) * (element->perimeter);
}

/*
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
*/

void qSort(desu* array, int size) /* DAFUQ! */ {
	int i = 0;
	int j = size;
	desu pivot = array[size / 2];
	while (i < j) {
		while (i < size && array[i] < pivot) {
			i += 1;
		}
		do {
			j -= 1;
		} while (j >= 0 && pivot < array[j]);
		if (i <= j) {
			desu tmp = array[i];
			array[i] = array[j];
			array[j] = tmp;
			i += 1;
			j -= 1;
		}
	}
	if (j >= 2) { qSort(array, j); }
	if (i <= (size -2)) { qSort(array + i, size - i); }
}

int main() {
	int size;
	std::cin >> size;
	desu* array = new desu[size];
	forEach(array, size, inputElement);
	forEach(array, size, fillPerimeter);	
	forEach(array, size, fillVolume);
	qSort(array, size);
	forEach(array, size, outputElement);
	delete[] array;
	return 0;
}
