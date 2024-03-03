// Sequence, Selection & Loop control
#include <iostream>
using namespace std;
int main()
{

    int age;
    cout << "Tell me your age" << endl;
    cin >> age;

    /* if ((age < 18) && (age>0))
     {
         cout << "You can not come to the party" << endl;
     }
     else if (age == 18)
     {
         cout << "You are a kid and you will get a kid pass to the party" << endl;
     }
     else if(age<1){
         cout<<"You are not born yet"<<endl;
     }

     else
     {
         cout << "You can come to the party" << endl;
     }*/
    switch (age)
    {
    case 18:
        cout << "You are an Adult" << endl;
        break;
    case 22:
        cout << "You are 22" << endl;
        break;
    case 2:
        cout << "You are a kid" << endl;
        break;
    default:
        cout << "No special  cases" << endl;
        break;
    }
    cout << "Done with switch case";

    return 0;
}