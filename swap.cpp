#include <iostream>
using namespace std;

class Swap{
    public:
    // Call By Value
    void swap(int a, int b){
        int temp = a;
        a= b;
        b = temp;
    }

    // call by address
    void swap(int *a, int *b){
        int temp = *a;
        *a = *b;
        *b = temp;
    }

   // Call by refrence
    void swap_r(int & x, int & y){
        int temp = x;
        x = y;
        y=x;
    }

};

int main(){
    Swap s;
    int a=5;
    int b=10;

    cout<<"Orignal: ";
    cout<<"A: "<<a<<" B: "<<b<<endl;


    s.swap(a,b);
    cout<<"A: "<<a<<" B: "<<b<<endl;

    s.swap(&a,&b);
    cout<<"A: "<<a<<" B: "<<b<<endl;

    s.swap_r(a,b);
    cout<<"A: "<<a<<" B: "<<b<<endl;

}