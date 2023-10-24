#include <iostream>
#include <list>
#include <algorithm>
#include <vector>

template<typename T>
T wypisz(T a) {
	std::cout << a<<' ';
	return 0;
}
template <typename T>
T zamien(T a) {
	return (- 1) * a;
}

int main()
{
	//zad1
	std::list<int> l1 = { 0,1,2,3,4,5,6,7,8,9,0,1,2,3,4,5,6,7,8,9 };
	std::list<double> l2 = { 1.5,2,2.5,3,3.5,4,4.5,5 };
	int howmany7 = std::count(l1.begin(),l1.end(), 7);
	std::cout << howmany7 << std::endl;
	for_each(l1.begin(), l1.end(), wypisz<int>);
	std::cout << std::endl;
	for_each(l2.begin(), l2.end(), wypisz<double>);
	std::cout << std::endl;
	//zad2
	std::vector<int>vec1 = { 1,2,3,4,5,6,7,8,9,10 };
	std::vector<int>vec2;
	vec2.resize(vec1.size());
	std::transform(vec1.begin(), vec1.end(), vec2.begin(), zamien<int>);
	for (int i = 0; i < vec2.size(); i++)
		std::cout << vec2[i] << ' ';
	std::cout << std::endl;
	std::vector <int>vec3;
	vec3.resize(vec1.size());
	std::transform(vec1.begin(), vec1.end(), vec3.begin(), [](int a) {return (-1) * a; });
	for (int i = 0; i < vec3.size(); i++)
		std::cout << vec3[i] << ' ';
	std::cout << std::endl;
	//zad3
	std::vector<int> V1 = { 1,2,3,4,5,6 };
	std::vector<int> V2 = { 7,8,9,10,11,12 };
	std::vector<int> V3;
	//std::transform(V1.begin(), V1.end(), V2.begin(), V2.end(), V3.begin(), []);
	





	return 0;

}