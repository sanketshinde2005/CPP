// C++ Header files & Operators
#include <iostream>
using namespace std;
int main()
{
    cout << "This is Hello World" << endl;
    int a = 7;
    int b = 2;
    cout << "a+b is equal to " << a + b << endl;
    cout << "a-b is equal to " << a - b << endl;
    cout << "a*b is equal to " << a * b << endl;
    cout << "a/b is equal to " << a / b << endl;
    cout << "a%b is equal to " << a % b << endl;
    cout << "a++ is equal to " << a++ << endl;
    cout << "a-- is equal to " << a-- << endl;
    cout << "++a is equal to " << ++a << endl;
    cout << "--a is equal to " << --a << endl;
    cout << endl;

    cout << "This are the types comparisonal operators" << endl;
    cout << "The value of a==b is " << (a == b) << endl;
    cout << "The value of a!=b is " << (a != b) << endl;
    cout << "The value of a<=b is " << (a <= b) << endl;
    cout << "The value of a>=b is " << (a >= b) << endl;
    cout << "The value of a<b is " << (a < b) << endl;
    cout << "The value of a>b is " << (a > b) << endl;

    return 0;
}