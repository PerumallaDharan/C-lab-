// Programs to understand different function call mechanism.
// a. call by reference
#include <iostream>
using namespace std;
void swap(int &x, int &y)
{
    int t;
    t = x;
    x = y;
    y = t;
}
int main()
{
    int a, b;
    cout << "Enter numbers" << endl;
    cin >> a >> b;
    cout << "Before swapping" << endl
         << "a=" << a << endl
         << "b=" << b << endl;
    swap(a, b);
    cout << "After swapping" << endl
         << "a=" << a << endl
         << "b=" << b << endl;
    return 0;
}