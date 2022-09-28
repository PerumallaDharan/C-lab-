// Write a Program to allocate memory dynamically for an object of a given class using class’s constructor.
#include <iostream>
using namespace std;
class someclass
{
public:
    int data1;
    char data2;
    someclass()
    {
        cout << "Constructor activated" << endl;
        data1 = 10;
        data2 = 'A';
    }
    ~someclass()
    {
        cout << "Destructor activated" << endl;
    }
    void show()
    {
        cout << "Data1 = " << data1 << endl;
        cout << "Data2 = " << data2 << endl;
    }
};
int main()
{
    someclass *ptr;
    ptr = new someclass;
    ptr->show();
    delete ptr;
    return 0;
}