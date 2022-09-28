// Search element in array
#include <iostream>
using namespace std;
int main()
{
    int a[50], i, n, pos, x;
    cout << "Enter the size of array = ";
    cin >> n;
    cout << "Enter the elements in array = ";
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "Enter element to be searched in the arrray = ";
    cin >> x;
    for (i = 0; i < n; i++)
    {
        if (a[i] == x)
        {
            pos = i;
            break;
        }
    }
    if (i == n)
    {
        cout << "Element not found in the array" << endl;
    }
    else
    {
        cout << "Element is present in the index = " << pos << endl;
    }
    return 1;
}