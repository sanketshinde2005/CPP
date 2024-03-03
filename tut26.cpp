// Friend Functions
#include <iostream>
using namespace std;

class complex
{
    int a, b;
    friend complex sumcomplex(complex o1, complex o2);

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    // Below line means that non member-sumcomplex function is allowed to do anything with my private(Members)
    void printNumber()
    {

        cout << "Your number is " << a << "+" << b << "i" << endl;
    }
};

complex sumcomplex(complex o1, complex o2)
{
    complex o3;
    o3.setNumber((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}

int main()
{
    complex c1, c2, sum;
    c1.setNumber(4, 5);
    c2.setNumber(2, 7);
    c1.printNumber();
    c2.printNumber();

    sum = sumcomplex(c1, c2);
    sum.printNumber();

    return 0;
}

/*properties of friend function
1. Not in the scope of the class
2. Since it is not in the scope of the class, it cannot be called from the object of that
class. c1.sumcomplex() == invalid
3. Can be invovked without the help of any objects
4. Usually contains the objects as arguments
5. Can be declared inside the public or private section of the class
6. It cannot access the members directly by their names and need object_name.member_name to
access any member.*/