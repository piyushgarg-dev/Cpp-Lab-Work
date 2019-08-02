#include <iostream>
using namespace std;

class Student{
    private:
    string name;
    string city;

    int rollno;
    int avgmarks;

    public:
    void getinformation(){
        cout<<"Name: ";
        cin>>name;
        cout<<"Roll No: ";
        cin>>rollno;
        cout<<"Marks: ";
        cin>>avgmarks;
        cout<<"City: ";
        cin>>city;
    }
    void setmarks(int m){
        avgmarks = m;
    }
    string getname(){
        return name;
    }
    string getcity(){
        return city;
    }
    int getmarks(){
        return avgmarks;
    }
    void display(){
        cout<<rollno<<"\t"<<name<<"\t"<<avgmarks<<"\t"<<city<<endl;
    }
    void setcity(string c){
        city=c;
    }
    int getlen(){
        int i=0;
        while(name[i]!='\0'){
            i++;
        }
        return i;
    }
};

int main(){
    int n;
    int ch;
    cout<<"Student Management System"<<endl;
    cout<<"Enter Number of Students: ";
    cin>>n;
    Student s[n];
    cout<<"Enter Student Info:"<<endl;
    for(int i=0;i<n;i++){cout<<"Student "<<i+1<<endl;s[i].getinformation();}
    do{
        cout<<"0. Exit \n";
        cout<<"1. Display Student Data\n";
        cout<<"2. Get Students by city name [CHD]\n";
        cout<<"3. Get Students by Name [N]...[E] \n";
        cin>>ch;
        switch(ch){
            case 1: // Display Student Data;
            cout<<"Roll_No"<<"\t"<<"Name"<<"\t"<<"Marks"<<"\t"<<"City"<<endl;
            for(int i=0;i<n;i++){s[i].display();}
            cout<<"\n\n"<<endl;
            break;
            case 2: // Display By City Name;
            for(int i=0;i<n;i++){
                cout<<s[i].getname()<<"\t"<<s[i].getcity()<<endl;
            }
            for(int i=0; i<n; i++){
                s[i].setcity("Patiala");
            }
            for(int i=0; i<n; i++){s[i].display();}
            break;
            case 3: //Display by Name [N]...[E];
            for(int i=0; i<n; i++){

                if((s[i].getname()[0]=='n'||s[i].getname()[0]=='N') && (s[i].getname()[s[i].getlen()]=='e' || s[i].getname()[s[i].getlen()]=='E') ){
                    s[i].display();
                }
            }
            break;
            default:cout<<"Invalid Option"<<endl;
        }

    }while(ch!=0);


}