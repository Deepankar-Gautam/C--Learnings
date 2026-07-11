#include <iostream>
using namespace std;

int main()
{
    // which no is bigger

    int first = 10;
    int second = 30;
    cout << endl << "bigger number";

    if (first > second)
    {
        cout << endl << first;
    }
    else
    {
        cout << endl << second;
    }
    
    // even or odd

    int num3 = 34;

    if (num3 % 2 == 0)
    {
        cout << endl << "EVEN";
    }
    else
    {
        cout << endl << "ODD";
    }

    // positive, negative or zero

    int num4 = -23;

    if (num4 > 0)
    {
        cout << endl << "The number is positive";
    }
    else if (num4 < 0)
    {
        cout << endl << "The number is negative";
    }
    else
    {
        cout << endl << "The number is zero";
    }

    // which is greater between 3 numbers

    int a = 10;
    int b = 20;
    int c = 15;

    if (a > b && a > c)
    {
        cout << endl << "a is the biggest number";
    }
    else if (b > a && b > c)
    {
        cout << endl << "b is the biggest number";
    }
    else
    {
        cout << endl << "c is the biggest number";
    }

    int year = 2004;
    cout << endl << "Is the year leap or not";

    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
    {
        cout << endl << "Yes, the given year is leap year";
    }
    else
    {
        cout << endl << "No, the given year is not a leap year";
    }

    return 0;

}