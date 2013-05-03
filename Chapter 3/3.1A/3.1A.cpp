#include <iostream>
#include <string>
//g++ -W -std=c++11 -lboost_regex main.cpp
#include <boost/regex.hpp>

int main () {
	std::cout << "Enter string: ";
	std::string inputString;
	std::getline (std::cin, inputString);
	while (inputString == "") {
		std::cout << "Enter again: ";
		std::getline (std::cin, inputString);
	}

	boost::regex expression("[0-9]", boost::regex::basic|boost::regex::extended /*posix regexp, not PCRE*/);
	std::string replace("");
	boost::smatch resultString;
	std::cout << "String after replace: " << boost::regex_replace(inputString, expression, replace, boost::match_default) << std::endl;

	return 0;
}
