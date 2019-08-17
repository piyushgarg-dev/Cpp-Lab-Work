#include <iostream>
using namespace std;

int main(){

    for(int i=1; i<=4; i++){

        for(int space=3;space>=i;space--){
            cout<<" ";
        }

        for(int start=1; start<=i;start++){
            cout<<" *";
        }
        
        cout<<"\n";
    }

    for(int i=1;i<=3;i++){
        for(int space=1;space<=i;space++){
            cout<<" ";
        }
        for(int start=3;start>=i;start--){
            cout<<" *";
        }
        cout<<"\n";
    }
}