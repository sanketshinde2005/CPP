// Constructors
#include <iostream>
using namespace std;
class Complex
{
    int a, b;

public:
    // Creating a constructor
    /*
    ---> Constructor is a special memeber function with same name as of the class.
    ---> It is used to intialize the objects of its class.
    ---> It is automatically invoked whenever an object is created.
    */
    Complex(void); // Costructor Declaration
    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << " i " << endl;
    }
};

Complex ::Complex(void) // ---> It is a default constructor as it takes no parameters
{
    a = 10;
    b = 9;
    // cout << "Hello world" << endl;
}

int main()
{
    Complex c1, c2, c3;
    c1.printNumber();
    c2.printNumber();
    c3.printNumber();

    return 0;
}

/* Characteristics of Constructors
1. It should be declared in the public section of the class.
2. They are automtically invoked whenever the object is created,
3. They cannot return values and do not have return types.
4. It can have default arguments.
5. We cannot refer to their address
*/