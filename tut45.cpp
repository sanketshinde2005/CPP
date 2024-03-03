// Virtual Base Class
#include <iostream>
using namespace std;

/*
Student ---> Test
Student ---> Sports
Test ---> Results
Sports ---> Results
*/
class Student
{
protected:
    int roll_no;

public:
    void set_number(int a)
    {
        roll_no = a;
    }
    void print_number(void)
    {
        cout << "Your Roll no. is " << roll_no << endl;
    }
};

class Test : virtual public Student
{
protected:
    float Maths, Physics;

public:
    void set_marks(float m1, float m2)
    {
        Maths = m1;
        Physics = m2;
    }

    void print_marks(void)
    {
        cout << "Our total result is: " << Maths + Physics << endl;
        cout << "Marks in Maths: " << Maths << endl;
        cout << "Marks in Physics: " << Physics << endl;
    }
};
class Sports : virtual public Student
{
protected:
    float Score;

public:
    void set_Score(float x)
    {
        Score = x;
    }

    void print_Score(void)
    {
        cout << "Our Sports score is: " << Score << endl;
    }
};

class Result : public Test, public Sports
{
private:
    float Total;

public:
    void display(void)
    {
        Total = Maths + Physics + Score;
        print_number();
        print_marks();
        print_Score();
        cout << "Your Total result is: " << Total << endl;
    }
};
int main()
{
    Result Sanket;
    Sanket.set_number(11046);
    Sanket.set_marks(22, 18);
    Sanket.set_Score(25);
    // Sanket.print_number();
    // Sanket.print_marks();
    // Sanket.print_Score();
    Sanket.display();

    return 0;
}