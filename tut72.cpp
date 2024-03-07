// List in STL
#include <iostream>
#include <list>
using namespace std;

void display(list<int> &lst)
{
    list<int>::iterator it;
    for (it = lst.begin(); it != lst.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}
int main()
{
    list<int> list1; // List of zero length
    list1.push_back(5);
    list1.push_back(2);
    list1.push_back(7);
    list1.push_back(8);
    list1.push_back(1);
    display(list1);
    /*Removing elements for list
    list1.pop_back();
    list1.pop_front();
    list1.remove(8);
    */

    // sorting the list
    list1.sort();
    display(list1);

    list<int> list2(5); // Empty list of size 7
    list<int>::iterator itr;
    itr = list2.begin();
    *itr = 27;
    itr++;
    *itr = 72;
    itr++;
    *itr = 81;
    itr++;
    *itr = 45;
    itr++;
    *itr = 36;
    itr++;
    display(list2);

    // Merging lists
    list1.merge(list2);
    cout << "List 1 after merging: ";
    display(list1);

    // Reversing the list
    list1.reverse();
    cout << "List 1 after reversing: ";
    display(list1);

    /* list<int>::iterator itr;
     itr = list1.begin();
     cout << *itr << " ";
     itr++;
     cout << *itr << " ";
     itr++;
     cout << *itr << " ";
     */
    return 0;
}