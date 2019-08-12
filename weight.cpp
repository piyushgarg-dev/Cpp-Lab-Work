#include <iostream>
using namespace std;

class Weight{
    private:
        float grams;
        float kilos;
        float total_kgs;
        float total_gms;

    public:
        Weight(){
            total_kgs=0;
            total_gms=0;
        }
        void get(){
            cout<<"Enter Kg: ";
            cin>>kilos;
            cout<<"Enter Gms: ";
            cin>>grams;
        }
        void add(Weight obj){
            total_kgs = kilos + obj.getkilos();
            total_gms = grams + obj.getgms();
            
            while(total_gms>=1000){
                total_gms -=1000;
                total_kgs++;
            }
        }
        void multiply(Weight obj){
            total_kgs = kilos + obj.getkilos();
            total_gms = grams + obj.getgms();
            while(total_gms>=1000){
                total_gms -= 1000;
                total_kgs++;
            }
        }

        float getkilos(){
            return kilos;
        }
        float getgms(){
            return grams;
        }
        void display(){
            cout<<"Kgs: "<<total_kgs<<endl;
            cout<<"Gms: "<<total_gms<<endl;
        }

};

int main(){
    Weight w1,w2;
    
    cout<<"Weight 1"<<endl;
    w1.get();
    cout<<"Weight 2"<<endl;
    w2.get();

    w1.add(w2);
    w1.display();

    w1.multiply(w2);
    w1.display();

}