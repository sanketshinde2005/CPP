// Pointers
#include <iostream>
using namespace std;

int main()
{
    // Pointer is a data type which holds the address of other data types
    int a = 3;
    int *b = &a;
    cout << b << endl;
    //& ----> Is Address of Operator
    cout << "The address of a is " << &a << endl;
    cout << "The address of a is " << b << endl;

    //* ----> Is Derefrence Operator
    cout << "The value at address b is " << *b << endl;

    // Pointer to Pointer
    int **c = &b;
    cout << "The address of b is " << &b << endl;
    cout << "The address of b is " << c << endl;
    cout << "The value at address c is " << *c << endl;
    cout << "The value at address value_at(value_at(c))is " << *c << endl;

    int ***d = &c;
    cout << "The address of c is " << &c << endl;
    cout << "The address of c is " << d << endl;
    return 0;
}