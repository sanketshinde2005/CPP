// Operator Precedence & Manipulators
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    /* int a = 27;
     cout << "The value of a was " << a << endl;
     a = 72;
     cout << "The value of a is " << a << endl;*/

    //**********Constants in C++*************
    // const int a = 27;
    // cout << "The value of a was " << a << endl;
    // a = 72.72;
    // cout << "The value of a is " << a << endl;

    //********************Manipulators in C++**********************
    /*int a = 3, b = 78, c = 1233;
    cout << "The value of a without setw is:" << a << endl;
    cout << "The value of b without setw is:" << b << endl;
    cout << "The value of c without setw is:" << c << endl;

    cout << "The value of a is:" << setw(4) << a << endl;
    cout << "The value of b is:" << setw(4) << b << endl;
    cout << "The value of c is:" << setw(4) << c << endl;*/

    // operator precedence
    int a = 5, b = 7;
    int c = (((a * 5) + b) - 45 + 8765);

    return 0;
}