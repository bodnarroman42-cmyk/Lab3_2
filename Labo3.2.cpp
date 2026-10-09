// Lab_03_2.cpp
// Боднар Роман 
// Лабораторна робота № 3.2
// Розгалуження, задане формулою: функція з параметрами.
// Варіант 0.2

#include <iostream>
using namespace std;

int main() {
	double x, a, b, c, F; 
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;
	cout << "x = "; cin >> x;

	if (x + 5 < 0 && c == 0)
		F = 1 / (a * x) - b;
	if (x + 5 > 0 && c != 0)
		F = (x - a ) / x;
	if (!(x + 5 < 0 && c == 0) && !(x + 5 > 0 && c != 0))
		F = (10 * x) / (c - 4);
	cout << endl;
	cout << "1) F = " << F << endl;

	if (x + 5 < 0 && c == 0)
		F = 1 / (a * x) - b;
	else if (x + 5 > 0 && c != 0)
		F = (x - a) / x;
	else
	F = (10 * x) / (c - 4);

	cout << "2) F = " << F << endl;
	return 0;
}