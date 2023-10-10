#include <iostream>
#include <string>

using namespace std;

template <typename T>
T sum(T a, T b)
{
	return a + b;
}

 template <>
string sum <string> (string a, string b)
{
	return a + b;
}

template <typename T, int n>
class Stack
{
private:
	T* tab;
	int x = 0;
	int rozmiar;
public:
	Stack(int a) : rozmiar(a) 
	{
		tab = new T[rozmiar];
	}
	
	void push(T a)
	{
		tab[x] = a;
		x++;
	}
	void pop()
	{
		tab[x] = 0;
		x--;
	}
	bool is_empty()
	{
		if (tab[0] == 0)
			return true;
	}
	void is_full()
	{
		if (tab[x] != 0)
			return true;
	}
	void print()
	{
		for (int i = 0; i < x; i++)
			cout << tab[i] << " ";
		cout << endl;
	}
};


int main()
{
	int a = 3;
	int b = 4;
	cout << sum(a, b) << endl;
	double c = 3.5;
	double d = 4.5;
	cout << sum(c, d) << endl;
	string x = "poniedzialek";
	string g = "wtorek";
	cout << sum(x, g) << endl;
	Stack <int, 5> Stos(5);
	Stos.push(1);
	Stos.push(2);
	Stos.push(3);
	Stos.push(4);
	Stos.push(5);
	Stos.print();
	Stos.pop();
	Stos.print();
	
	return 0;
}