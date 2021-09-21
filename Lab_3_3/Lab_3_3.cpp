// Lab_3_3.cpp
// Козубенко Андрій
// Лабораторна робота № 3.3
// Розгалуження, задане графіком функції.
// Варіант 10
#include <iostream>
#include <cmath>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	double x; // вхідний аргумент
	double R; // вхідний параметр
	double y; // результат обчислення виразу

	cout << "R = "; cin >> R;
	cout << "x = "; cin >> x;

	// розгалуження в повній формі
	if ((x <= -8.0 - R) || (x > -8.0 + R && x <= -4.0))
		y = R;
	else
		if (x > -8.0 - R && x <= -8.0 + R)
			y = R - sqrt(R * R - (x + 8.0) * (x + 8.0));
		else
			if (x > -4.0 && x <= 2.0)
				y = (-x) * R / 4.0;
			else
				y = x - 3.0;

	cout << endl << "y = " << y;

	cin.get();
	return 0;
}