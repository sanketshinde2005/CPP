// Copy constructors
#include <iostream>
using namespace std;

class Number
{
    int a;

public:
    Number() { a = 25; }
    Number(int num)
    {
        a = num;
    }
    // When copy constructor is not found, complier supplies its own constructor
    Number(Number &obj)
    {
        // This is a copy constructor
        cout << "Copy Constructor called" << endl;
        a = obj.a;
    }

    void display()
    {
        cout << "The number for this object is " << a << endl;
    }
};
int main()
{
    Number x, y(50), z(75), z2(40);
    x.display();
    y.display();
    z.display();
    // Copy constructor is used to resemble z1 in form of x or y or z
    Number z1(x); // Copy constructor invoked
    z1.display();

    z2 = z; // Copy constructor not invoked
    z2.display();
    Number z3 = z; // Copy constructor invoked
    z3.display();
    return 0;
}