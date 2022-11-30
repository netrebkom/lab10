// Завдання 3.cpp : This file contains the 'main' function. Program execution begins and ends there.

#define _USE_MATH_DEFINES

#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    setlocale(0, ".1251");
    setlocale(LC_CTYPE, "ukr");
    int a;
    double z1, z2 ;

    cout << "Введiть значення а:";
    cin >> a;

    z1 = cos(a) + sin(a) + cos(3*a) + sin(3*a);
    cout << "Значення першого виразу:" << z1 << endl;

    z2 = 2*sqrt(2) * cos(a) * sin((M_PI/4) + 2*a);
    cout << "Значення другого виразу:" << z2 << endl;

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
