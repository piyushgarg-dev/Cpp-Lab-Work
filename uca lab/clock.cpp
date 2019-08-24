#include <iostream>
using namespace std;

class Clock
{
private:
    int hours, minutes;

public:
    Clock(int h, int m)
    {
        this->hours = h;
        this->minutes = m;
    }
    void addTime(Clock c1, Clock c2)
    {
        hours = c1.hours + c2.hours;
        minutes = c1.minutes + c2.minutes;
        while (minutes >= 60)
        {
            minutes -= 60;
            hours++;
        }
    }
    void display()
    {
        cout << "Time: " << hours << ":" << minutes << endl;
    }
};

int main()
{
    Clock c1(8, 50);
    Clock c2(2, 20);
    Clock c3(0, 0);
    c3.addTime(c1, c2);
    c3.display();
}