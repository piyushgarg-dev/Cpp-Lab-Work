#include <iostream>
using namespace std;

class Mystring{
    private:
    char str[20], revstring[20];
    int num;

    public:
    void read(){
        cout<<"Enter A String: ";
        cin>>str;
        cout<<"Enter Number: ";
        cin>>num;
    }
    void addNumbers(Mystring x, Mystring y){
        num = x.num + y.num;
    }
    void addStrings(Mystring x, Mystring y){
        int index = 0;
        for(int i=0; i<x.num; i++){
            str[i] = x.str[i];
            index++;
        }
        
        for(int i=0; i<y.num; i++){
            str[index] = y.str[i];
            index++;
        }
    }
    void addStringRev(Mystring x, Mystring y){
        int index = x.num-1;
        int cindex=0;
        for(int i=0; i<x.num; i++){
            revstring[i] = x.str[index];
            index--;
            cindex++;
        }
        int index2 = y.num-1;
        for(int i=cindex; i<y.num; i++){
            revstring[i] = y.str[index2];
            index2--;
        }
        
    }

    void display(){
        cout<<"Addition: "<<num<<endl;
        cout<<"New String: "<<str<<endl;
        cout<<"Reverse String: "<<revstring<<endl;

    }
};

int main(){
    Mystring c1,c2,c3;

    c1.read();
    c2.read();

    c3.addNumbers(c1,c2);
    c3.addStrings(c1,c2);
    c3.addStringRev(c1,c2);

    c3.display();

}