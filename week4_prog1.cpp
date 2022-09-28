// Write a Program which creates & uses array of object of a class.( for eg. implementing the
// list of Managers of a Company having details such as Name, Age, etc..).
#include <iostream>
using namespace std;
class Manager
{
private:
    int eid;
    int age;
    char name[50];

public:
    void getdata();
    void putdata();
};
void Manager::getdata()
{
    cout << "Enter employee id = " << endl;
    cin >> eid;
    cout << "Enter employee name = " << endl;
    cin >> name;
    cout << "Enter age = " << endl;
    cin >> age;
}
void Manager::putdata()
{
    cout << eid << " ";
    cout << name << " ";
    cout << age << " ";
    cout << endl;
}
int main()
{
    Manager emp[30];
    int n, i;
    cout << "Enter number of managers = ";
    cin >> n;
    for (i = 0; i < n; i++)
    {
        emp[i].getdata();
    }
    cout << endl
         << "Manager data - " << endl;
    for (i = 0; i < n; i++)
    {
        emp[i].putdata();
    }
    return 1;
}