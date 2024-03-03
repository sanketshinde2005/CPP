// Static Variables & Functions in OOP
#include <iostream>
using namespace std;

class Employee
{
    int id;
    static int count;

public:
    void setData(void)
    {
        cout << "Enter the id" << endl;
        cin >> id;
        count++;
    }
    void getData(void)
    {
        cout << "The id of this employee is " << id << " and this is the employee number " << count << endl;
    }

    static void getCount(void)
    {
        cout << "The value of the count is " << count << endl;
    }
};
// Count is the static data member of class Employee
int Employee ::count; // Default value is zero

int main()
{
    Employee sanket, raj, vivek, sharad;
    // harry.id=1;
    // harry.count=1; cannot do this as id count are private

    sanket.setData();
    sanket.getData();
    Employee::getCount();

    raj.setData();
    raj.getData();
    Employee::getCount();

    vivek.setData();
    vivek.getData();
    Employee::getCount();

    sharad.setData();
    sharad.getData();
    Employee::getCount();

    return 0;
}