// Write a program to show conversion from string to int and vice-versa.
#include <iostream>
#include <sstream>
using namespace std;
int main()
{
    int k;
    cout << "Enter an integer value" << endl;
    cin >> k;

    stringstream ss;
    ss << k;

    string s;
    cin >> s;
    ss >> s;
    
    string num;
    ss >> num;
    
    int i;
    ss << i;
    
    cout << "An integer value is : " << k << endl;
    cout << "String implementation of an integer value is : " << s;
    cout << endl
         << "The value of the string is : " << s << endl;
    cout << "Integer value of the string is : " << i;
    
    return 0;
}