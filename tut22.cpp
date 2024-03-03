// Nesting of member functions
#include <iostream>
#include <string>
using namespace std;

class binary
{
    string s;

public:
    void read(void);
    void chk_bin(void);
    void ones(void);
    void display(void);
};

void binary ::read(void)
{
    cout << "Enter a binary number" << endl;
    cin >> s;
}

void binary ::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect binary format" << endl;
            exit(0);
        }
    }
}

void binary ::ones(void)
{
    cout << "Dispalying you binary number" << endl;
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
    cout << endl;
}

void binary ::display(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
}

int main()

{
    // OOPs - Classes and objects

    // C++ ---> intially called ---> C with classes with stroustroup
    // class ---> extension of structures (in C)
    // structures had limitations
    //              ---> members are public
    //              ---> No methods
    // classes ---> Structures + more
    // classes ---> Can have methods and properties
    // classes ---> Can make fe members as private & few as public
    // structures in C++ are typedefed
    // you can declare objects along with the class declaration like this:
    /* class Employee{
        Class definition
    } harry, rohan, lovish; */
    // harry,salary = it makes no sense if salary is private

    // Nesting of member function
    binary b;
    b.read();
    b.chk_bin();
    b.ones();
    b.display();

    return 0;
}