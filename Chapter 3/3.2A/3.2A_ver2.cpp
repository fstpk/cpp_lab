#include <iostream>
#include <fstream>
#include <cstring>

int countCommentLength(std::istream& input) {
	int count = 0;
	int state = 0;
	char c;
	while ((c = input.get()) != std::char_traits<char>::eof()) {

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
	return count;
}

int main (int argc, char** argv) {
	int count;
	if ((argc == 1) || (argc == 2 && strcmp(argv[1], "-") == 0)) {
		count = countCommentLength(std::cin);
	} else {
		std::ifstream in(argv[1]);
		count = countCommentLength(in);
		in.close();
	}
	std::cout << "Symbol count: " << count << std::endl;
	return 0;
}
