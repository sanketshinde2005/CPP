// Object Arrays & arguments in OOPS
#include <iostream>
using namespace std;

class Employee
{
    int id;
    int salary;

public:
    void setId(void)
    {
        salary = 500000;
        cout << "Enter the ID of employee" << endl;
        cin >> id;
    }
    void getId(void)
    {
        cout << "The id of the employee is " << id << endl;
    }
};

int main()
{
    /* Employee Sanket, Raj, Devarshi, Vaibahv;
     Sanket.setId();
     Sanket.getId();*/
    Employee SVS[4];
    for (int i = 0; i < 4; i++)
    {

        SVS[0].setId();
        SVS[0].getId();
    }

    return 0;
}