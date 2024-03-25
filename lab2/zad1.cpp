#include <iostream>
#include <regex>
#include <string>
#include <map>

std::string replaceDigWLetters(const std::string& input)
{
	std::map<char, char>digToLet =
	{
		{'1','a'},
		{'2','b'},
		{'3','c'},
		{'4','d'},
		{'5','e'},
		{'6','f'}
	};
	std::string result = input;
	std::regex digRegex("\\d");
	auto words_begin = std::sregex_iterator(input.begin(), input.end(), digRegex);
	auto words_end = std::sregex_iterator();
	for (std::sregex_iterator i = words_begin; i != words_end; i++)
	{
		std::smatch match = *i;
		char digit = match.str()[0];
		if (digToLet.find(digit) != digToLet.end())
		{
			result[match.position()] = digToLet[digit];
		}
	}
	return result;
}



int main()
{
	std::string input;
	std::getline(std::cin, input);
	std::string result = replaceDigWLetters(input);
	std::cout << result << std::endl;
	return 0;
}