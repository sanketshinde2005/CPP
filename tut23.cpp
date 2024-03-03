// Memory Alloctions % using arrays in OOP
#include <iostream>
using namespace std;

class Shop
{
    int itemId[100];
    int itemPrice[100];
    int counter;

public:
    void initCounter(void) { counter = 0; }
    void setPrice(void);
    void displayPrice(void);
};

void Shop ::setPrice(void)
{

    cout << "Enter Id of our item no" << counter + 1 << endl;
    cin >> itemId[counter];
    cout << "Enter Price of our item" << endl;
    cin >> itemPrice[counter];
    counter++;
}
void Shop ::displayPrice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The Price of item with Id " << itemId[i] << " is " << itemPrice[i] << endl;
    }
}
int main()
{
    Shop Mall;
    Mall.initCounter();
    Mall.setPrice();
    Mall.setPrice();
    Mall.setPrice();
    Mall.setPrice();
    Mall.displayPrice();
    return 0;
}