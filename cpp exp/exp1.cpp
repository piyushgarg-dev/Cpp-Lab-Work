#include <iostream>
using namespace std;

class Room
{
private:
    int len;
    int width;

public:
    void setlen(int l)
    {
        len = l;
    }
    void setwidth(int w)
    {
        width = w;
    }
    int area()
    {
        return len * width;
    }
    int perimeter()
    {
        return 2 * (len + width);
    }
    void display()
    {
        cout << "Area:" << area() << endl;
        cout << "Perimeter:" << perimeter() << endl;
    }
};

int main()
{
    cout << "\nPiyush\t1810992598\n"
         << endl;
    Room r1, r2, r3, r4, r5;

    r1.setlen(4);
    r1.setwidth(8);

    r2.setlen(40);
    r2.setwidth(58);

    r3.setlen(14);
    r3.setwidth(8);

    r4.setlen(48);
    r4.setwidth(38);

    r5.setlen(48);
    r5.setwidth(8);

    r1.display();
    r2.display();
    r3.display();
    r4.display();
    r5.display();
}