// Function objects
#include <iostream>
#include <functional>
#include <algorithm>
using namespace std;

int main()
{
    // Function objects(Functor): Function wrapped in a class so that it is available like an object
    int arr[] = {18, 36, 54, 72, 90, 27};
    sort(arr, arr + 6);
    sort(arr, arr + 6, less<int>());
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}