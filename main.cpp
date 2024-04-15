//star uml
#include <iostream>
#include <vector>
#include <ranges>


int sumaDzielnikow(int x)
{
	auto iota_view = std::views::iota(1, x);
	auto filtered_view = iota_view | std::views::filter([x](int i) {return x % i == 0; });
	int suma = 0;
	for (int n : filtered_view)
		suma += n;
	return suma;
}
int main()
{
	int a = 10000;
	std::vector<int> numbers;
	for (int i = 2; i < a; i++)
	{
		int suma1 = sumaDzielnikow(i);
		if (suma1 > i && sumaDzielnikow(suma1) == i)
		{
			numbers.push_back(i);
			numbers.push_back(suma1);
		}
	}
	std::cout << "liczby zaprzyjaznione do " << a << std::endl;
	for (int i : numbers)
	{
		std::cout << i << std::endl;
	}
	return 0;
}
