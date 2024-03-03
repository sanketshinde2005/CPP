// Structures, unions & enums
#include <iostream>
using namespace std;

typedef struct employee
{
    /* data */
    int eID;
    char favChar;
    float salary;
} ok;

union money
{
    /* data */
    int rice;
    char car;
    float pounds;
};

int main()
{
    enum Meal
    {
        breakfast,
        lunch,
        dinner
    };
    // cout<<breakfast;
    // cout<<lunch;
    // cout<<dinner;
    Meal m1 = dinner;
    cout << m1;

    /* ok harry;
     union money m1;
     m1.rice = 34;
     cout << m1.rice;
     /*ok harry;
     harry.eID = 1;
     harry.favChar = 's';
     harry.salary = 12053685;
     cout << harry.eID << endl;
     cout << harry.favChar << endl;
     cout << harry.salary << endl;*/

    return 0;
}