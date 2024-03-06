// Member function Templates & overloading Template
#include <iostream>
using namespace std;

template <class T>
class Sanket
{
public:
    int data;
    Sanket(T a)
    {
        data = a;
    }
    void display();
};

template <class T>
void Sanket<T>::display()
{
    cout << data;
}

void Func(int a)
{
    cout << "This is first function (" << a << ")" << endl;
}
template <class T>
void Func(T a)
{
    cout << "This is a templatised function (" << a << ")" << endl;
}
template <class T>
void Func1(T a)
{
    cout << "This is a templatised function (" << a << ")" << endl;
}
int main()
{
    // Sanket<int> h(9);
    // cout << h.data << endl;
    // h.display();

    Func(4);  // Exact match takes the highest priority
    Func1(9); 
    return 0;
}