// Inheritance Syntax
#include <iostream>
using namespace std;

// Base class
class Employee
{

public:
    int id;
    float salary;
    Employee(int inpid)
    {
        id = inpid;
        salary = 69000;
    }
    Employee() {}
};

// Derived class
/* syntax for derived class
class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
{
    class members/methods/etc....
    Note:
    1. Default visibility mode is private
    2. Public visibility mode: Public members of base class becomes public members of derived class
    3. Private visibility mode: Public members of base class becomes private members of derived class
    4. Private members are never inherited
}*/

// Creating a programmer class derived from employee base class
class programmer : public Employee
{
public:
    programmer(int inpid)
    {
        id = inpid;
    }
    int languagecode = 7;
    void getData()
    {
        cout << id << endl;
    }
};
int main()
{
    Employee sanket(1), raj(2);
    cout << sanket.salary << endl;
    cout << raj.salary << endl;
    programmer Walt(5);
    cout << Walt.languagecode << endl;
    Walt.getData();
    return 0;
}