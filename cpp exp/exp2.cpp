#include <iostream>
using namespace std;

class Number{
    private:

    public:
    int iseven(int n){
        return n%2==0?1:0;
    }
    int isprime(int n){
        
        for(int i=2;i<n/2;i++){
            if(n%i==0){
                return 0;
            }
           
        }
        return 1;
    }
    int sumofdigits(int n){
        int sum=0;
        while(n>0){
            sum+=n%10;
            n = n/10;
        }
        return sum;
    }
    int ispallindrome(int n){
        int num = n;
        int revnum = 0;
        int r;
        while(n>0){
            r = n%10;
            revnum = revnum*10+r;
            n = n/10;
        }
        return num==revnum?1:0;
    }
    int reverse(int n){
        int revnum = 0;
        int r;
        while(n>0){
            r = n%10;
            revnum = revnum*10+r;
            n = n/10;
        }
        return revnum;
    }
    void display(int n){
        cout <<"Even: "<< iseven(n)?'Y':'N';
        cout<<endl;
        cout <<"Prime: "<<isprime(n)?'Y':'N';
        cout<<endl;
        cout << "Pallindrome:"<< ispallindrome(n)?'Y':'N';
        cout<<endl;
        cout << "Sum of Digits: "<<sumofdigits(n)<<endl;
        cout<<"Reverse: "<<reverse(n)<<endl;
        


    }
    
};
int main(){
    cout<<"Piyush\t1810992598\n";
    Number n1;
    n1.display(21212);
}