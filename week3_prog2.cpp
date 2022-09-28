// Write a Program using class to process Shopping List for a Departmental Store. The list
// include details such as the Code No and Price of each item and perform the operations like
// Adding, Deleting Items to the list and Printing the Total value of a Order.

#include <iostream>
using namespace std;
const int n = 100;
class store
{
private:
    int count;
    float price[n];
    int code[n];

public:
    void cnt()
    {
        count = 0;
    }
    void getitem();
    void sum();
    void remove();
    void display();
};
void store::getitem()
{
    cout << endl << "Enter item code = ";
    cin >> code[count];
    cout << "Enter item price = ";
    cin >> price[count];
    count++;
}
void store::sum()
{
    float sum = 0;
    for (int i = 0; i < count; i++)
    {
        sum += price[i];
    }
    cout << endl << "Total amount = " << sum << endl;
}
void store::display()
{
    cout << endl << "\t\tList" << endl;
    cout << "\t\t**************" << endl;
    cout << "\t\tCode\tPrice" << endl;
    cout << "\t\t--------------" << endl;
    for (int i = 0; i < count; i++)
    {
        cout << "\t\t" << code[i] << "\t" << price[i] << endl;
    }
    cout << endl;
}
void store::remove()
{
    int x;
    cout << endl << "Enter item code = ";
    cin >> x;
    for (int i = 0; i < count; i++)
    {
        if (code[i] == x)
            price[i] = 0;
    }
}
int main()
{
    store order;
    order.cnt();
    int choice;
    do
    {
        cout << endl;
        cout << "**************************************************************" << endl;
        cout << "\t\tChoose an option" << endl;
        cout << "1.Add item" << endl;
        cout << "2.Total" << endl;
        cout << "3.Remove item" << endl;
        cout << "4.Display" << endl;
        cout << "5.Exit" << endl;
        cout << "Enter choice = ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            order.getitem();
            break;
        case 2:
            order.sum();
            break;
        case 3:
            order.remove();
            break;
        case 4:
            order.display();
            break;
        case 5:
            break;
        default:
            cout << "Error in input; try again\n";
        }
    } while (choice != 5);
}
