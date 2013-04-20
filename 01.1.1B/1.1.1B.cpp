#include <iostream>

int nyashka(int x) {return x <0? -x: x;}
int main() {
	std::cout << "Function: f=|x-|x+3||" << std::endl << "Enter [x]:" << std::endl;
	int x;
	std::cin >> x;
	int result = nyashka(x-nyashka(x+3));
	std::cout << "result: " << result << std::endl;
	return 0;
}