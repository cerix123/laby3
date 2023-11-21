#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

int main()
{	
	//zad1
	std::vector<int> V1{ 1,2,3,4,5 };
	std::vector<int>::iterator it;
	for (it = V1.begin(); it != V1.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;
	std::vector<int>::reverse_iterator it2;
	for(it2=V1.rbegin();it2!=V1.rend();it2++)
		std::cout << *it2 << " ";
	std::cout << std::endl;
	std::vector<int>::iterator it3;
	for (it3 = V1.begin(); it3 != V1.end(); it3++)
		*it3 *= 2;
	std::vector<int>::const_iterator it4;
	for(it4=V1.begin();it4!=V1.end();it4++)
		std::cout << *it4 << " ";
	std::cout << std::endl;
	std::vector<int>::const_iterator it5 = V1.cbegin();
	std::cout << *it5 << std::endl;
	//zad2
	std::vector<int> V2;
	std::transform(V1.begin(), V1.begin() + 3, std::back_inserter(V2), [](int a) {return a; });
	for (int i = 0; i < V2.size(); i++)
		std::cout << V2[i] << " ";
	std::cout << std::endl;
	std::back_insert_iterator<std::vector<int>> it6(V2);
	std::fill_n(it6, 3, 1);
	for (int i = 0; i < V2.size(); i++)
		std::cout << V2[i] << " ";
	std::cout << std::endl;
	std::vector<int>::iterator it7 = V2.begin();
	it7 = V2.insert(it7, 3, 0);
	for (int i = 0; i < V2.size(); i++)
		std::cout << V2[i] << " ";
	std::cout << std::endl;
	//zad3

	return 0;
}