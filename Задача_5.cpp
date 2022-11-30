// Задача_5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include<iostream>
#include<math.h>

using namespace std;

int main() {

    setlocale(0, "");

    int x, y, x1;

    cout << " Введiть Х: "; cin >> x;

    y = log((cos(5 * x) / sin(x)) + (sin(5 * x) / cos(x))) * ((sin(10 * x) - sin(6 * x)) / cos(4 * x));

    if ((cos(5 * x) / sin(x)) + (sin(5 * x) / cos(x)) > 0 && cos(4 * x) != 0)
    {
        cout << "Віловідь: " << y;
    }
    else
    {
        cout << "Введiть iнше число" << endl;
        cout << " Х: "; cin >> x1;
        y = log((cos(5 * x) / sin(x)) + (sin(5 * x) / cos(x))) * ((sin(10 * x) - sin(6 * x)) / cos(4 * x));
        cout << "Відповідь: " << y << endl;
    }
    system("pause");
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
