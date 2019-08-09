#include <iostream>
using namespace std;

class Distance{
    private:
    float feet;
    float inch;

    float totalinch;
    float totalfeet;

    public:
    Distance(){
        feet = 0;
        inch = 0;
        totalinch=0;
        totalfeet=0;
    }

    void get(){
        cout<<"Enter Feet: ";
        cin>>feet;
        cout<<"Enter Inch: ";
        cin>>inch;
    }
    void add(Distance obj){
        totalfeet = feet+obj.getfeet();
        totalinch = inch+obj.getinch();
        
        while(totalinch>=12){
            
                totalinch -= 12;
                totalfeet++;
            
        }
    }
    float getfeet(){
        return feet;
    }
    float getinch(){
        return inch;
    }
    void display(){
        cout<<"\nTotal Feet: "<<totalfeet;
        cout<<"\nToatl Inch: "<<totalinch<<endl;
    }

};
int main(){
    Distance d1;
    Distance d2;
    // Master Obj -> d2
    d1.get();
    d2.get();

    d2.add(d1);
    d2.display();

    return 0;
}