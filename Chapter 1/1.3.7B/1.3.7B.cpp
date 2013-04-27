#include <iostream>
#include <fstream>

int main() {
	std::ifstream is("input.txt");
	char c;
	while ((c = is.get()) != -1) {
		if (c <= 32) {
		continue;
		}
		std::cout << (int)c << " ";
	}
	is.close();
	std::cout << std::endl;
	return 0;
}
