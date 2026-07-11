#include <iostream>
using namespace std;
int main() 
{
    // data types and variables
    int a = 12;
    cout << endl << a;
    char character ='a';
    cout << endl << character;
    // char character2 = 'ab';        // yellow error coz it's confused why 2 char
    // cout << endl << character2;
    string strings = "Rover";
    cout << endl << strings;
    float num = 12.34;
    cout << endl << num;
    double num2 = 34.45;
    cout << endl << num2;
    bool var = 1;
    cout << endl << var;
    bool var2 = false;         // true and false stores as 1 and 0 respectively
    cout << endl << var2;
    
    // size of a variable in bytes
    cout << endl << sizeof (a);
    cout << endl << sizeof (character);
    cout << endl << sizeof (strings);
    cout << endl << sizeof (num);
    cout << endl << sizeof (num2);
    cout << endl << sizeof (var);
    cout << endl << sizeof (var2);

    // typecasting
    int cat = 'A';             // returns 65 according to decimal in converstion chart
    cout << endl << cat;
    char dog = 65;             // returns A according to ASCIi in conversion chart
    cout << endl << dog;
    // char bat = 590;            // returns 78 because 590%256 = 78, so returns N
    // cout << endl << bat;

    // concepts of variable, arithmatic operators, assignment operators are same as conceptually

    return 0;
}

// dunning cruger effect