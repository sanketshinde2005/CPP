// Multilevel Inheritance Deepdrive
#include <iostream>
using namespace std;

class Students
{
protected:
    int roll_number;

public:
    void set_roll_number(int);
    void get_roll_number(void);
};

void Students ::set_roll_number(int r)
{
    roll_number = r;
}
void Students ::get_roll_number()
{
    cout << "The roll no. is " << roll_number << endl;
}

class Exam : public Students
{
protected:
    float maths;
    float physics;

public:
    void set_marks(float, float);
    void get_marks(void);
};

void Exam::set_marks(float m1, float m2)
{
    maths = m1;
    physics = m2;
}
void Exam::get_marks()
{
    cout << "The marks obtained in maths are: " << maths << endl;
    cout << "The marks obtained in physics are: " << physics << endl;
}

class Result : public Exam
{
    float percentage;

public:
    void display_results()
    {
        get_roll_number();
        get_marks();
        cout << "Your percentage is " << (maths + physics) / 2 << "%" << endl;
    }
};
int main()
{
    /*
    Notes:
        If we are inheriting B from A and C from B:[A ---> B ---> C]
        1. A is the base class for B and B is the base class for C
        2. A ---> B ---> C is called inheritance path
    */
    Result Sanket;
    Sanket.set_roll_number(46);
    Sanket.set_marks(80, 89);
    Sanket.display_results();
    return 0;
}