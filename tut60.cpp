// Reading & riting files in C++
#include <iostream>
#include <fstream>

/*
The useful classes for working with files in C++ are:
1. fstreambase
2. ifstream ---> derived from fstreambase
3. ofstream ---> derived from fstreambase
*/

/*
In order to work ith fies in C++, we will open it. Primarily, there are two ways to open a file:
1. Using the constructor
2. Using the memberfunction open() of the class
*/
using namespace std;

int main()
{
    string st = "Sanket needs to study Mechanics";
    // Opening a file using constructor & writing it
    ofstream out("sample60.txt"); // Write operation
    out << st;

    string st2;
    // Opening a file using constructor & reading it
    ifstream in("sample60.txt"); // Read operation
    // in >> st2;
    getline(in, st2);
    cout << st2;

    return 0;
}