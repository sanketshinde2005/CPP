// Functions & Fuction Prototypes
#include <iostream>
using namespace std;
// function prototype
// type function-name (arguments)
// int sum(int a, int b);----> Acceptable
// int sum(int , int );----> Acceptable
// int sum(int a, b);----> Not Acceptable
// void g(void);----> Acceptable
// void g();----> Acceptable
void g(void);
// Formal Parameters a and b will be taking values from actual parameters num1 and num2.
int sum(int a, int b)
{
    int c = a + b;
    return c;
}

int main()
{
    int num1, num2;
    cout << "Enter first number" << endl;
    cin >> num1;
    cout << "Enter second number" << endl;
    cin >> num2;
    cout << "The sum is " << sum(num1, num2);
    g();
    // num1 and num2 are actual parameters

    return 0;
}
void g()
{
    cout << "\nHello There";
}