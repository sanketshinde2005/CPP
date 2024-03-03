// Constructors in Derived class
#include <iostream>
using namespace std;
/*
Case 1:
class B : public A{
    order of execution of constructor --> first A() & then B()
};
    Case 2:
class A : public B, public C{
    order of execution of constructor --> first B() then C() & then A()
};
    Case 3:
class A : public B, virtual public C{
    order of execution of constructor --> first C() then B() & then A()
};
*/

class Base1
{
    int Data1;

public:
    Base1(int i)
    {
        Data1 = i;
        cout << "Base1 class constructor called" << endl;
    }
    void printdataBase1(void)
    {
        cout << "The value of data1 is " << Data1 << endl;
    }
};
class Base2
{
    int Data2;

public:
    Base2(int i)
    {
        Data2 = i;
        cout << "Base2 class constructor called" << endl;
    }
    void printdataBase2(void)
    {
        cout << "The value of data2 is " << Data2 << endl;
    }
};

class Derived : public Base1, public Base2
{
    int Derived1, Derived2;

public:
    Derived(int a, int b, int c, int d) : Base1(a), Base2(b)
    {
        Derived1 = c;
        Derived2 = d;
        cout << "Derived class constructor called" << endl;
    }
    void printdataDerived(void)
    {
        cout << "The value of derived1 is " << Derived1 << endl;
        cout << "The value of derived2 is " << Derived2 << endl;
    }
};
int main()
{
    Derived Sanket(18, 27, 72, 81);
    Sanket.printdataBase1();
    Sanket.printdataBase2();
    Sanket.printdataDerived();
    return 0;
}