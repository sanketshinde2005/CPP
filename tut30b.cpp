// Parameterized & Default Constructors
#include <iostream>
using namespace std;

class Point
{
    int x, y;

public:
    Point(int a, int b)
    {
        x = a;
        y = b;
    }

    void displayPoint()
    {
        cout << "The point is (" << x << ", " << y << ") " << endl;
    }
};
int main()
{
    Point p(1, 8);
    p.displayPoint();

    Point q(2, 7);
    q.displayPoint();

    return 0;
}