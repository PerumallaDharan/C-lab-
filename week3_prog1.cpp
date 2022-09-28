// Write a Program to design a class having static member function Named showcount() which
// has the property of displaying the number of objects created of the class.

#include <iostream>
using namespace std;

class test
{
    // default access members are private
    int obj_no;         // private members
    static int obj_cnt; // private members
public:
    test()
    {
        obj_no = ++obj_cnt;
    }
    ~test()
    {
        --obj_cnt;
    }
    void print_obj_number(void)
    {
        cout << "Object number = " << obj_no << endl;
    }
    static void print_obj_count(void)
    {
        cout << "Object count = " << obj_cnt << endl;
    }
};

int test::obj_cnt; // :: is scope resolution operator

int main()
{
    test t1, t2;
    test::print_obj_count();
    test t3;
    test::print_obj_count();
    t1.print_obj_number();
    t2.print_obj_number();
    t3.print_obj_number();
    return 1;
}