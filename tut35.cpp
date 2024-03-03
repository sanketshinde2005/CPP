// Destructors
#include <iostream>
using namespace std;

// Destructor neither takes an arugment nor does itreturn any value
int count = 0;

class Num
{
public:
    Num()
    {
        count++;
        cout << "This is the time constructor is called for an object number" << count << endl;
    }

    ~Num()
    {
        cout << "This is the time when my destructor is called for object number" << count << endl;
        count--;
    }
};
int main()
{
    cout << "We are inside a main function" << endl;
    cout << "Creating first objects n1" << endl;
    Num n1;
    {
        cout << "Entering this block" << endl;
        cout << "Creating to more objects" << endl;
        Num n2, n3;
        cout << "Exiting this block" << endl;
    }
    cout << "Back to main" << endl;
    return 0;
}