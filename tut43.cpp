// Inheritance Ambiguity resolution
#include <iostream>
using namespace std;

class Base1
{
public:
    void greet()
    {
        cout << "How are you" << endl;
    }
};
class Base2
{
public:
    void greet()
    {
        cout << "Hello Amigos" << endl;
    }
};

class Derived : public Base1, public Base2
{
    int a;

public:
    void greet()
    {
        Base2::greet();
    }
};
int main()
{
    Base1 base1obj;
    Base2 base2obj;
    base1obj.greet();
    base2obj.greet();
    Derived d;
    d.greet();
    return 0;
}
/*
If a derived class does not mention it's own say then ambiguity chooses base class's say automatically & if derived class do have say of it's own then it just overwrites the base class's say.
*/