// Programs to understand storage specifiers
#include <iostream>
using namespace std;
// declaring the variable which is to be
// made extern an criticalvalue cam alsobe intisialized to x
int x;
void externstorageclass()
{
    cout << "Demonstrating extern class" << endl;
    // telling the compiler that the vaiable x is an extern variable
    // and has been defined else where above the main function
    extern int x;
    cout << "value of the variable x"
         << " declared as exetern :" << x << endl;
    cout << "enter the value of x" << endl;
    cin >> x;
    cout << "Modeified value of the variable x"
         << " declared as extern:\n"
         << x;
}
int main()
{
    externstorageclass();
    return 0;
}
