// Задача 4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#define _USE_MATH_DEFINES

#include<iostream>
#include<math.h>

using namespace std;
double f(double q, double b, double& x, double& t)
{
    x = pow(t, 2) + pow(b, 2);
    t = pow(b, 3) + exp(sqrt(q));
    return atan(fabs(x));
}
int main()
{
    setlocale(0, ".1251");
    
    float q=2, b=1.8; 
    double x, y, t;

    cout << "y= " << f(q, b, x,t)  << endl;
    cout << "x= " << x << endl << "t= " << t << endl;

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
