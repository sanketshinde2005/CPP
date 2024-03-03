// Pointer to objects
#include <iostream>
using namespace std;

class Complex
{
    int real, imaginary;

public:
    void getData()
    {
        cout << "The real part is " << real << endl;
        cout << "The imaginary part is " << imaginary << endl;
    }
    void setData(int a, int b)
    {
        real = a;
        imaginary = b;
    }
};
int main()
{
    // Complex c1;
    // Complex *ptr = &c1;
    Complex *ptr = new Complex;
    // (*ptr).setData(27, 72); is exactly same as
    ptr->setData(27, 72);
    // (*ptr).getData(); is also same as
    ptr->getData();

    // Array of objects
    Complex *ptr1 = new Complex[4];
    ptr1->setData(2, 7);
    ptr1->getData();
    return 0;
}