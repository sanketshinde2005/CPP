/*
This is a practice question for inheritance
*/

#include <iostream>
using namespace std;

class Simple
{
protected:
    int first_number;
    int second_number;

public:
    void set_first_number(int);
    void get_first_number(void);
    void set_second_number(int);
    void get_second_number(void);
};

void Simple ::set_first_number(int a)
{
    first_number = a;
}
void Simple ::get_first_number()
{
    cout << "The first number is " << first_number << endl;
}
void Simple ::set_second_number(int b)
{
    second_number = b;
}
void Simple ::get_second_number()
{
    cout << "The second number is " << second_number << endl;
}

class Output : public Simple
{
    int Sum;

public:
    void display_output()
    {
        get_first_number();
        get_second_number();
        cout << "Sum of two numbers is " << (first_number + second_number) << endl;
    }
};

int main()
{
    Output Raj;
    Raj.set_first_number(72);
    Raj.set_second_number(27);
    Raj.display_output();
    return 0;
}