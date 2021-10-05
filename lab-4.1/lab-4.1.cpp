// Lab-4,1.cpp
// < Гамаюнов Олександр >
// Лабораторна робота № 4.1
// Цикли.
// Варіант 5.1
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	// 1 спосіб

	int i;
	double S;
	S = 0;
	i = 1;
	while (i <= 15)
	{
		S += (sin(1. * i) * sin(1. * i)) + (cos(1. / i) * cos(1. / i)) / i * i;
		i++;
	}
	cout << S << endl;
	
	// 2 спосіб

		S = 0;
	i = 1;
	do {
		S += (pow(sin(1. * i), 2) + pow(cos(1. / i), 2)) / i * i;
		i++;
	} while (i <= 15);
	cout << S << endl;

	// 3 спосіб
	
	S = 0;
	for (i = 1; i <= 15; i++)
	{
		S += (pow(sin(1. * i), 2) + pow(cos(1. / i), 2)) / i * i;
	}
	cout << S << endl;

	// 4 спосіб

	S = 0;
	for (i = 15; i >= 1; i--)
	{
		S += (pow(sin(1. * i), 2) + pow(cos(1. / i), 2)) / i * i;
	}
	cout << S << endl;
	
	return 0;
}