// Single Inheritance Deepdrive
#include <iostream>
using namespace std;

class Base
{
    int Data1; // Private by default and is not inheritable
public:
    int Data2;
    void setData();
    int getData1();
    int getData2();
};

void Base ::setData(void)
{
    Data1 = 10;
    Data2 = 20;
}
int Base ::getData1()
{
    return Data1;
}

int Base ::getData2()
{
    return Data2;
}

class derived : public Base
{
    int Data3;

public:
    void process();
    void display();
};

void derived ::process()
{
    Data3 = Data2 * getData1();
}
void derived ::display()
{
    cout << "Value of data 1 is " << getData1() << endl;
    cout << "Value of data 2 is " << Data2 << endl;
    cout << "Value of data 3 is " << Data3 << endl;
}
int main()
{
    derived der;
    der.setData();
    der.process();
    der.display();
    return 0;
}