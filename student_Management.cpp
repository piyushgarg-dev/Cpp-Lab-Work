#include <iostream>

using namespace std;

class Student{
    private:
    string name;
    int rollno;
    int avgmarks;

    public:
    Student(string sname, int srollno, int savgMarks){
        name = sname;
        rollno = srollno;
        avgmarks = savgMarks;
    }
    string getname(){
        return name;
    }
    int getrollno(){
        return rollno;
    }
    int getmarks(){
        return avgmarks;
    }
    void display(){
        cout << "-------------------------- \n";
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollno << endl;
        cout << "Marks: " << avgmarks << endl;
        cout << "-------------------------- \n";
    }
    
};

int main(){
    Student s1("Piyush",98,90);
    Student s2("Nakriti",36,89);
    Student s3("Najat",01,90);
    
    if((s1.getname()[0]=='n' || s1.getname()[0]=='N')  && s1.getmarks()>80){
        s1.display();
    }
    if((s2.getname()[0]=='n' || s2.getname()[0]=='N') && s2.getmarks()>80){
        s2.display();
    }
    if((s3.getname()[0]=='n' || s3.getname()[0]=='N') && s3.getmarks()>80){
        s3.display();
    }
}