// Programs to understand different function call mechanism.
// b. call by value
#include <iostream>
using namespace std;
void swap(int x, int y)
{
    int t;
    t = x;
    x = y;
    y = t;
    cout << "After swapping in function" << endl
         << "a=" << x << endl
         << "b=" << y << endl;
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
    cout << "After swapping outside function" << endl
         << "a=" << a << endl
         << "b=" << b << endl;
    return 0;
}