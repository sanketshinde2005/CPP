// Itializtion list in constructors
#include <iostream>
using namespace std;

/*
Syntax or intialization list in constructor:
constructor (argument-list) : intialization section
{
    assignment + other code;
}

class Test{
    int a;
    int b;
    public:
        Test(inti, int j) : a(i), b(j){Constructor body}
};
*/
class Test
{
    int b;
    int a;

public:
    // Test(int i, int j) : a(i), b(j)
    // Test(int i, int j) : a(i), b(i + j)
    // Test(int i, int j) : a(i), b(2 * j)
    // Test(int i, int j) : a(i), b(a - j)
    // Test(int i, int j) : b(j), a(i + b)  ---> Red flag this will create problems because a will be intialized first
    Test(int i, int j) : b(j), a(i + b)
    {
        cout << "Constructors executed" << endl;
        cout << "Value of a is " << a << endl;
        cout << "Value of b is " << b << endl;
    }
};

int main()
{
    Test t(2, 7);
    return 0;
}