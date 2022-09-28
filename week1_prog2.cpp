// Prime Numbers
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int n, count;
    cout << "Enter the number" << endl;
    cin >> n;
    cout << "Prime numbers are = " << endl;
    for (int i = 1; i <= n; i++)
    {
        count = 0;
        for (int j = 1; j <= i; j++)
        {
            if (i % j == 0)
            {
                count++;
            }
        }
        if (count == 2)
        {
            cout << i << setw(5);
        }
    }
    return 0;
}