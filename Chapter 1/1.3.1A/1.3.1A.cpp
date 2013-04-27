#include <iostream>

int main() {
	std::cout << "Enter height:" << std::endl;
	int height;
	std::cin >> height;

	while (height <= 0 || height > 20) {
		std::cout << "And again!" << std::endl;
		std::cin >> height;
	}

	for (int i = 2*height-1, j = 0; i > 0; i-=2, ++j) {
		for (int k=0; k<j; ++k) std::cout << " ";
		for (int l=0; l<i; ++l) std::cout << "*";
		std::cout << std::endl;
	}
	return 0;
}
