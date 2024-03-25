#include <iostream>
#include <regex>
#include <string>


bool containsDigitUpperSpecial(const std::string& input)
{
	std::regex digitRegex("\\d");
	std::regex upperRegex("[A-Z]");
	std::regex specialRegex("[^a-zA-Z0-9\\s]");
	return std::regex_search(input, digitRegex) && std::regex_search(input, upperRegex) && std::regex_search(input, specialRegex);
}


int main()
{
	std::string input;
	std::cout << "Napisz cos" << std::endl;
	std::getline(std::cin, input);
	if (containsDigitUpperSpecial(input))
	{
		std::cout << "jest przynajmniej 1 cyfra, 1 duza litera i 1 znak specjalny" << std::endl;
	}
	else
		std::cout << "Nie ma" << std::endl;
	return 0;
}