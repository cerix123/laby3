module fizzbuzz;

import <string>;
import <fstream>;
import <iostream>;
import <sstream>;
import <vector>;

std::vector<double> liczby;

void processFizzBuzzFromFile(const std::string& filename)
{
	std::ifstream file(filename);
	if (!file.is.open())
	{
		std::cerr << " nie udalo sie otowrzyc pliku" << std::endl;
		return;
	}
	std::string line;
	while (std::getline(file, line))
	{
		std::istringstream iss(line);
		double liczba;
		while (iss >> liczba)
			liczby.push_back(liczba);
	}
	for (int i = 0; i < liczby.size(); i++)
	{
		if (liczby[i] % 3 == 0)
			std::cout << "Fizz" << std::endl;
		if (liczby[i] % 5 == 0)
			std::cout << "Buzz" << std::endl;
		if (liczby[i] % 3 && liczby[i] % 5 == 0)
			std::cout << "FizzBuzz" << std::endl;
		else
			std::cout << liczby[i] << std::endl;
	}
}
