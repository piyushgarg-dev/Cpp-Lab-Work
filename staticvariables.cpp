#include <iostream>

using namespace std;

class Number{
    private:
    static int static_k;
    int k;

    public:
    static void setstatic_variable(int n){
        static_k = n;
    }
    int getstatic_k(){
        return static_k;
    }
    void setk(int n){
        k = n;
    }
    int getk(){
        return k;
    }
    void increment(){
        static_k++;
    } 

};

int Number::static_k=10;

int main(){
    Number n1;
    Number n2;
    Number n3;
    Number n4;
    Number n5;
    

    cout << "N1"<<endl;
    n1.setk(4);
    cout << "Static--> " << n1.getstatic_k() << endl;
    cout << "Non Static --> "<< n1.getk() << endl;
    n1.increment();
    cout << "Static--> " << n1.getstatic_k() << endl;
    cout << "Non Static --> "<< n1.getk() << endl;
    cout << "------------------------\n\n";

    cout << "N2"<<endl;
    n2.setk(3);
    cout << "Static--> " << n2.getstatic_k() << endl;
    cout << "Non Static --> "<< n2.getk() << endl;
    n2.increment();
    cout << "Static--> " << n2.getstatic_k() << endl;
    cout << "Non Static --> "<< n2.getk() << endl;
    cout << "------------------------\n\n";

    cout << "N3"<<endl;
    n3.setk(6);
    cout << "Static--> " << n3.getstatic_k() << endl;
    cout << "Non Static --> "<< n3.getk() << endl;
    n3.increment();
    cout << "Static--> " << n3.getstatic_k() << endl;
    cout << "Non Static --> "<< n3.getk() << endl;
    cout << "------------------------\n\n";

    cout << "N4"<<endl;
    n4.setk(2);
    cout << "Static--> " << n4.getstatic_k() << endl;
    cout << "Non Static --> "<< n4.getk() << endl;
    n4.increment();
    cout << "Static--> " << n4.getstatic_k() << endl;
    cout << "Non Static --> "<< n4.getk() << endl;
    cout << "------------------------\n\n";

    cout << "N5"<<endl;
    n5.setk(8);
    cout << "Static--> " << n5.getstatic_k() << endl;
    cout << "Non Static --> "<< n5.getk() << endl;
    n5.increment();
    cout << "Static--> " << n5.getstatic_k() << endl;
    cout << "Non Static --> "<< n5.getk() << endl;
    cout << "------------------------\n\n";

}