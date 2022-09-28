// Operator
#include <iostream>
using namespace std;
int main()
{
    int a, b;
    char op;
    cout << "Enter two intergers = ";
    cin >> a >> b;
    fflush(stdin);
    cout << "Enter an operator = ";
    cin >> op;
    if (op == '+')
    {
        cout << "Sum = " << a + b;
    }
    else if (op == '-')
    {
        cout << "Difference = " << a - b;
    }
    else if (op == '*')
    {
        cout << "Product = " << a * b;
    }
    else if (op == '%')
    {
        cout << "Modulus = " << a % b;
    }
    else if (op == '/')
    {
        cout << "Division = " << a / b;
    }
}