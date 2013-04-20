#include <iostream>

int nyashka(int x) {return x <0? -x: x;}
int main() {
	std::cout << "Function: f=|2x-|x-3||" << std::endl << "Enter [x]:" << std::endl;
	int x;
	std::cin >> x;
	int result = nyashka(x*2-nyashka(x-3));
	std::cout << "result: " << result << std::endl;
	return 0;
}