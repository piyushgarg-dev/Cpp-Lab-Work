/*
    Author: Piyush Garg
 */
#include <iostream>

#define PI 3.14

using namespace std;

class Circle{
    private:
    float r;

    public:
    void setradius(float radius=0){this->r = radius;}
    int getradius(){return this->r;}
    int area(){return PI*this->r*this->r;}
    int circumference(){return 2*PI*this->r;}
};

class Rectangle{
    private:
    float l, b;

    public:
    void setlen(float length=0){this->l = length;}
    void setwidth(float width=0){this->b = width;}
    int getlen(){return this->l;}
    int getwidth(){return this->b;}
    int area(){return this->l*this->b;}
    int perimeter(){return 2*(this->l+this->b);}
};

class Square{
    private:
    int s;

    public:
    void setside(float side){this->s = side;}
    int getside(float side){return this->s;}
    int area(){return this->s*this->s;}
    int perimeter(){return 4*this->s;}
};

int main()
{
    /*
    
        Write your code here

     */

    return 0;
}