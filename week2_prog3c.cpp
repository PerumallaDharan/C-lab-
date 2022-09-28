// Programs to understand storage specifiers
#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char name[30];
    register int i;
    cout << "enter a string" << endl;
    cin >> name;
    cout << "the reverse string is:" << endl;
    int x;
    x = strlen(name);
    for (i = x - 1; i >= 0; i--)
    {
        cout << name[i];
    }
    return 0;
}