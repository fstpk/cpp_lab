#include <iostream>

int main () {
	int count = 0;
	int state = 0;
	char c;
	while ((c = std::cin.get()) != std::char_traits<char>::eof()) {

		switch (state) {
			case 0:
				if (c == '/') {
					state = 1;
				} else if (c == '\"') {
					state = 2;
				} else if (c == '\'') {
					state = 3;
				}
				break;
			case 1:
				state = (c == '*') ? 4 : 0;
				break;
			case 2:
				if (c == '\"') {
					state = 0;
				}
				break;
			case 3:
				if (c == '\'') {
					state = 0;
				}
				break;		
			case 4:
				if (c == '*') {
					state = 5;
				} else {
					count += 1;
				}
				break;
			case 5:
				if (c == '/') {
					state = 0;
				} else {
					count += 2;
				}
				break;
			default:
				std::cout << "Bad state: " << state << std::endl;
			break;
		}    
	}
	std::cout << "Symbol count: " << count << std::endl;
	return 0;
}
