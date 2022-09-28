// Write a program to demonstrate the Inline functions.
#include <iostream>
using namespace std;
inline int sum(int x, int y)
{
    return x + y;
}
int main()
{
    int a, b;
    cout << "Enter numbers" << endl;
    cin >> a >> b;
    cout << "Sum of the given numbers = " << sum(a, b);
    return 0;
}