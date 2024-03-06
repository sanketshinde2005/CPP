// Class templates with default parameters
#include <iostream>
using namespace std;

template <class T1 = int, class T2 = float, class T3 = char>
class Sanket
{
public:
    T1 a;
    T2 b;
    T3 c;
    Sanket(T1 x, T2 y, T3 z)
    {
        a = x;
        b = y;
        c = z;
    }
    void display()
    {
        cout << "The value of a is " << a << endl;
        cout << "The value of b is " << b << endl;
        cout << "The value of c is " << c << endl;
    }
};
int main()
{
    Sanket<> S(27, 7.2, 'r');
    S.display();
    cout << endl;

    Sanket<float, char, char> R(4.5, 's', 'r');
    R.display();
    return 0;
}