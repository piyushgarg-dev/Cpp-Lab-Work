#include <iostream>
using namespace std;
class Add{
    public:

    int add(int a, int b){
        return a+b;
    }

    float add(float a, float b){
        return a+b;
    }

    int add(int a, int b, int c){
        return a+b+c;
    }

    float add(float a, float b, float c){
        return a+b+c;
    }

    float add(int a, float b){
        return a+b;
    }

    float add(float a, int b){
        return a+b;
    }

    float add(int a, int b, float c){
        return a+b+c;
    }

    float add(int a, float b, int c){
        return a+b+c;
    }

    float add(float a, int b, int c){
        return a+b+c;
    }

    float add(float a, int b, float c){
        return a+b+c;
    }



};

int main(){
    Add num;

    cout << num.add(2,4)<<endl;
    cout << num.add(1.5f , 2.4f)<<endl;
    cout << num.add(2,4,7)<<endl;
    cout << num.add(2.3f, 5.6f, 6.7f)<<endl;
    cout << num.add(2,5.6f)<<endl;
    cout << num.add(3.4f,2)<<endl;
    cout << num.add(1,3,4.5f)<<endl;
    cout << num.add(4,6.5f,8)<<endl;
    cout << num.add(9.5f,5,6)<<endl;

    return 0;
    
}