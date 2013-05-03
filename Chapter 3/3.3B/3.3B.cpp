#include <iostream>
#include <algorithm>
#include <string>

int main () {
	std::cout << "Enter string: ";
	std::string inputString;
	std::getline (std::cin, inputString);
	while (inputString == "") {
		std::cout << "Enter again: ";
		std::getline (std::cin, inputString);
	}

	std::reverse(inputString.begin(), inputString.end());
	std::cout << "Revert string: " << inputString << std::endl;
	return 0;
}
