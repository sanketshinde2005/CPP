// Recursive Functions & Recursions
#include <iostream>
using namespace std;

int fib(int n)
{
    if (n < 2)
    {
        return 1;
    }
    return fib(n - 2) + fib(n - 1);
}
// fib(5)
// fib(4) + fib (3)
int factorial(int n)
{
    if (n <= 1)
    {
        return 1;
    }
    return n * factorial(n - 1);
}
// Step by step calculation of factorial
// Factorial(4) = 4 * factorial(3);
// Factorial(4) = 4 * 3 * factorial(2);
// Factorial(4) = 4 * 3 * 2 factorial(1);
// Factorial(4) = 24
int main()
{
    // Factorial of number:
    int a;
    cout << "Enter the number" << endl;
    cin >> a;
    cout << "The factorial of a " << a << " is " << factorial(a) << endl;
    cout << "The term in fibonacci sequence at position " << a << " is " << fib(a) << endl;

    return 0;
}