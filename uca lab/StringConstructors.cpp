#include <iostream>
#include <string.h>
using namespace std;

class String{
    private:
    int num;
    char str[20];
    char revstr[20];
    public:
    String(int number, char str1[]){
        num = number;
        int index=0;
        for(int i=0; i<number; i++){
            str[i]=str1[i];
            index++;
        }
        
        int index2=number-1;
        for(int i=0; i<number; i++){
            revstr[i]=str1[index2];
            index2--;
        }
    }
    String(String &c1, String &c2){
        num = c1.num+c2.num;
        strcat(c1.str,c2.str);
        strcpy(str,c1.str);
        strcat(c1.revstr,c2.revstr);
        strcpy(revstr,c1.revstr);
    }
    void display(){
        cout<<"Number: "<<num<<endl;
        cout<<"String: "<<str<<endl;
        cout<<"Reverse: "<<revstr<<endl;
    }
};


int main(){
    char str1[]="Piyush";
    char str2[]="Lovish";
    String s1(3,str1);
    String s2(2,str2);
    String s3(s1,s2);
    s3.display();
}