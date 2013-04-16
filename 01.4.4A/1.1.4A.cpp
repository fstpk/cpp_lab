#include <iostream>

int kuroneko(int x) { return x*x; }
int shironeko(int x) { return x*x*x; }

int main() {
	std::cout << "Enter [x]:" << std::endl;
	int x;
	std::cin >> x;
	std::cout << "x^2: " << kuroneko(x) << std::endl << "x^3: " << shironeko(x) << std::endl;
	return 0;
}