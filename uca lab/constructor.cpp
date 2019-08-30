#include <iostream>
using namespace std;

class Complex{
    private:
    int real, imag;
    public:
    Complex(){
        real=0;
        imag=0;
    }
    Complex(int realNumber, int imagNumber){
        real = realNumber;
        imag = imagNumber;
    }
    Complex(Complex &x, Complex &y){
        real = x.real+y.real;
        imag = x.imag+y.imag;

    }
    void read(){
        cout<<"Enter Real: ";
        cin>>real;
        cout<<"Enter Imag: ";
        cin>>imag;
    }
    void display(){
        cout<<"Real: "<<real<<endl;
        cout<<"Imag: "<<imag<<endl;
    }


};

int main(){
    Complex c1;
    c1.read();

    Complex c2(5,4);

    Complex c3(c1,c2);

    c3.display();
}