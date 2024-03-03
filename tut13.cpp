// Array & Pointer Arithematic
#include <iostream>
using namespace std;

int main()
{
    int marks[4] = {23, 45, 69, 89};
    int mathMarks[4];
    mathMarks[0] = 3456;
    mathMarks[1] = 8406;
    mathMarks[2] = 9086;
    mathMarks[3] = 4456;
    cout << "These are math marks" << endl;
    cout << mathMarks[0] << endl;
    cout << mathMarks[1] << endl;
    cout << mathMarks[2] << endl;
    cout << mathMarks[3] << endl;
    /*cout << "These are marks" << endl;
    cout << marks[0] << endl;
    cout << marks[1] << endl;
    marks[2] = 455;
    cout << marks[2] << endl;
    cout << marks[3] << endl;*/

    for (int i = 0; i < 4; i++)
    {
        cout << "The value of marks " << i << " is " << marks[i] << endl;
    }

    int *p = marks;
    /*cout << "The value of marks[0] is " << *p << endl;
     cout << "The value of marks[0] is " << *(p + 1) << endl;
     cout << "The value of marks[0] is " << *(p + 2) << endl;
     cout << "The value of marks[0] is " << *(p + 3) << endl;*/

    cout << *p << endl;
    cout << *(p++) << endl;
    cout << *(+p) << endl;
    return 0;
}