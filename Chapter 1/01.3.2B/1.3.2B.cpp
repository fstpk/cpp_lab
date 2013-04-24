#include <iostream>
#include <fstream>
//iomanip для работы с динамическими массивами
#include <iomanip>

void readData(int tableSize, int* table, int* maxw) {
	std::ifstream is("input.txt");
	for (int i = 0; i < tableSize; ++i) {
		for (int j = 0; j < tableSize; ++j) {
			is >> table[i * tableSize + j];
			int t = table[i * tableSize + j];
			int w = 0;
			do {
				t = t / 10;
				++w;
			} while (t != 0);
			if (maxw[j] < w) {
				maxw[j] = w;
			}
		}
	}
	is.close();
}

void printData(int tableSize, int* table, int* maxw) {
	std::cout << std::setiosflags(std::ios::left);
	for (int i = 0; i < tableSize; ++i) {
		for (int j = 0; j < tableSize; ++j) {
			std::cout << std::setw(maxw[j] + 1) << table[i * tableSize + j];
		}
		std::cout << std::endl;
	}
}

int main() {
	const int tableSize = 4;
	int table[tableSize][tableSize];
	int maxw[tableSize];

	for (int i = 0; i < tableSize; ++i) {
		maxw[i] = 0;
	}

	readData(tableSize, (int*)table, maxw);
	printData(tableSize, (int*)table, maxw);

	return 0;
}
