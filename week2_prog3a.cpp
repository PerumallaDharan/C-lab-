// Programs to understand storage specifiers
#include <iostream>
using namespace std;
void autostorageclass()
{
    cout << "Demonstrating auto class" << endl;
    // Declaring an auto variable
    // No data type declaration
    auto a = 32;
    auto b = 3.2;
    auto c = "hello";
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
}
int main()
{
    autostorageclass();
    return 0;
}