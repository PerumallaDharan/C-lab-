// Write a program showing data conversion between objects of different classes.
#include <iostream>
using namespace std;
class Time
{
private:
    int hour, mins;

public:
    Time()
    {
        hour = 0;
        mins = 0;
    }
    Time(int t)
    {
        hour = t / 60;
        mins = t % 60;
    }
    void display()
    {
        cout << "Time : " << hour << " hrs " << mins << " mins " << endl;
    }
};

int main()
{
    Time t;
    int dur;
    cin >> dur;
    t = dur;
    t.display();
    return 0;
}