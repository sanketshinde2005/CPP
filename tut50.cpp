// New & Delete Keywords
#include <iostream>
using namespace std;

int main()
{
    // Basic example
    int a = 2;
    int *ptr = &a;

    cout << "The value of a is " << *(ptr) << endl;

    // new operator
    int *p = new int(7);
    cout << "The value at address a is " << *(p) << endl;

    int *arr = new int[4];
    arr[0] = 10;
    *(arr + 1) = 20;
    arr[2] = 30;
    arr[3] = 40;
    // delete arr;

    cout << "The value of arr[0] is " << arr[0] << endl;
    cout << "The value of arr[1] is " << arr[1] << endl;
    cout << "The value of arr[2] is " << arr[2] << endl;
    cout << "The value of arr[3] is " << arr[3] << endl;
    return 0;
}