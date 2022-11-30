// Задача 1(2).cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
	setlocale(0, ".1251");
	setlocale(LC_CTYPE, "ukr");
	double x = 2, y, y1, z;
	std::cout << "Введiть Ваш вiк = ";
	std::cin >> y;
	y1 = (y * 365) * 2;
	z = y1 / 8760;
	std::cout << " Кiлькiсть рокiв, якi Ви витратили на палiння " << z << std::endl;
	system("pause>>void");
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
