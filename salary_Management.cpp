#include <iostream>

using namespace std;

class Employee{
    private:
    string name;
    string des;
    int salary;

    public:
    void setname(string n){
        name = n;
    }
    void setsalary(int s){
        salary = s;
    }
    void setdesignation(string d){
        des = d;
    }

    string getname(){
        return name;
    }
    string getdesignation(){
        return des;
    }
    int getsalary(){
        return salary;
    }
    void display(){
        cout << "--------------------- \n";
        cout << "Name: " << name << endl;
        cout << "Salary: " << salary << endl;
        cout << "Desigation: " << des << endl;
        cout << "------------------------ \n";
    }


};

int main(){
    Employee e1;
    Employee e2;
    Employee e3;

    e1.setname("Piyush");
    e1.setsalary(20000);
    e1.setdesignation("Manager");


    e2.setname("Rajat");
    e2.setsalary(4000);
    e2.setdesignation("Accountant");


    e3.setname("Aakriti");
    e3.setsalary(2400);
    e3.setdesignation("Helper");

    int s1 = e1.getsalary();
    int s2 = e2.getsalary();
    int s3 = e3.getsalary();

    if(s1>s2 && s1>s3){
        e1.display();
    }
    else if(s2>s1 && s2>s3){
        e2.display();
    }
    else{
        e3.display();
    }



}