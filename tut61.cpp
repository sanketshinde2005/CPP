// Reading & writing files in C++
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    // Connecting our file withhout stream
    ofstream hout("sample60.txt");

    // Creating a name string and filling it with the string entered by the user
    cout << "Enter your name" << endl;
    string name;
    cin >> name;

    // h is just a random variable
    // Writing a string to the file
    hout << "My name is " + name;
    hout.close();

    ifstream hin("sample60.txt");
    string content;
    hin >> content;
    getline(hin, content);
    cout << "The content of this file is: " << content;
    hin.close();

    return 0;
}