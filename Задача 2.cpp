// Задача 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
 using namespace std;

 struct point
 {
     float x;
     float y;
     float length(point pt) 
     {return sqrt(pow(pt.x - x, 2.0f) + pow(pt.y - y, 2.0f));}
 };

    int main()
    {
        point A = { 0, 0 };
        point B = { 22, 21 };
        point C = { -22, 23 };
        float p = (A.length(B) + A.length(C) + B.length(C)) / 2;
        float r = sqrt((p - A.length(B)) * (p - A.length(C)) * (p - B.length(C)) / p);
        float Mb =  (sqrt(2 * pow(A.length(B), 2)) + (2 * pow( A.length(C), 2)) - (pow(B.length(C), 2))) / 2 ;
        cout << "r= " << r << endl;
        cout << "Mb= " << Mb << endl;
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
