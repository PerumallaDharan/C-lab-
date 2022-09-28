// Write a Program to find Maximum out of Two Numbers using friend function. Note: Here
// one number is a member of one class and the other number is member of some other class.
#include <iostream>
using namespace std;
class ABC; // forward decleration
class XYZ
{
    double x;

public:
    void setdata(double a)
    {
        x = a;
    }
    friend void max(XYZ, ABC);
};
class ABC
{
    double y;

public:
    void set_data(double a)
    {
        y = a;
    }
    friend void max(XYZ, ABC);
};
void max(XYZ t1, ABC t2)
{
    if (t1.x > t2.y)
        cout << t1.x;
    else
        cout << t2.y;
}
int main()
{
    ABC _abc;
    XYZ _xyz;
    _xyz.setdata(27);
    _abc.set_data(78);
    max(_xyz, _abc);
    return 0;
}