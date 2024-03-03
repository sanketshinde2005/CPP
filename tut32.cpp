// Constructor with default arguments
#include <iostream>
using namespace std;

class Simple
{
    int data1;
    int data2;
    int data3;

public:
    Simple(int a, int b = 9, int c = 7)
    {
        data1 = a;
        data2 = b;
        data3 = c;
    }
    void printData();
};

void Simple ::printData()
{
    cout << "The value of data is " << data1 << " , " << data2 << " and " << data3 << endl;
}
int main()
{
    Simple s(2, 4);
    s.printData();
    Simple s1(5);
    s1.printData();
    return 0;
}