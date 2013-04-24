#include <iostream>
#include <fstream>

void output(char c) {
	if (c > 32) {
		std::cout << (int)c << " ";
	}
}

int main() {
	std::ifstream is("input.txt");
	char c;
	while ((c = is.get()) != -1) {
		output(c);
	}
	is.close();
	std::cout << std::endl;
	return 0;
}
