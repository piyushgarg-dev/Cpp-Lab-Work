/*
Author: Piyush Garg
 */
#include <iostream>
using namespace std;

class Array
{
private:
    int size;
    int arr[];

public:
    void get()
    {
        int s;
        cout << "Enter No. of Elements: ";
        cin >> s;
        size = s;
        for (int i = 0; i < s; i++)
        {
            cout << "[" << i << "]: ";
            cin >> arr[i];
        }
    }
    void display()
    {
        cout << "[ ";
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << "]" << endl;
    }
    void unshift()
    {
        int num;
        cout << "Enter Element to insert: ";
        cin >> num;
        int s = size + 1;
        //cout<<s<<endl;
        int newarray[s + 1];
        newarray[0] = num;
        int index = 0;
        for (int i = 1; i < s; i++)
        {
            newarray[i] = arr[index];
            index++;
        }
        for (int i = 0; i < s; i++)
        {

            arr[i] = newarray[i];
        }
        size++;
    }
    void shiftmiddle()
    {
        int num = 0;
        cout << "Enter Element to insert: ";
        cin >> num;
        
        int middle = size / 2;
        size++;
        int newarray[size];
        for (int i = 0; i < middle; i++)
        {
            newarray[i] = arr[i];
        }
        newarray[middle] = num;
        for (int i = middle ; i < size; i++)
        {
            newarray[i+1] = arr[i];
        }
        for (int i = 0; i < size; i++)
        {
            arr[i] = newarray[i];
        }
    }
    void shift()
    {
        int num;
        cout << "Enter Element to insert: ";
        cin >> num;
        arr[size] = num;
        size++;
    }
    void deletestart(){
        int newarray[size];
        for(int i=1;i<size;i++){
            newarray[i-1]=arr[i];
        }
        for(int i=0; i<size; i++){
            arr[i]=newarray[i];
        }
        size--;
    }
    void deleteend(){
        int newarray[size];
        for(int i=0; i<size-1; i++){
            newarray[i]=arr[i];
        }
        size--;
        for(int i=0; i<size;i++){
            arr[i]=newarray[i];
        }
    }
    void linerar(){
        int s;
        int flag=0;
        cout<<"Enter Element to be searched: ";
        cin>>s;
        for(int i=0; i<size;i++){
            if(arr[i]==s){
                cout<<"[ "<<i<<" ]:"<<arr[i]<<endl;
                flag=1;
            }
        }
        if(!flag){
            cout<<"Not Found!"<<endl;
        }
    }
    void deletemiddle(){
        int middle = size/2;
        for(int i=middle; i<size;i++){
            arr[i]=arr[i+1];
        }
        size--;
    }
    void binary(){
        int s;
        int flag=0;
        cout<<"Enter Element to Binary Search: ";
        cin>>s;
        int beg=0;
        int end=size;
        int mid=0;
        while(beg<=end){
            mid = (beg+end)/2;
            if(arr[mid]==s){
                cout<<"[ "<<mid<<" ]: "<<arr[mid]<<endl;
                flag=1;
                break;
            }
            else if(arr[mid]>s){
                end=mid-1;
            }
            else if(arr[mid]<s){
                beg=mid+1;
            }
        }
        if(!flag){
            cout<<"Not Found!"<<endl;
        }
    }
};

int main()
{
    Array a1;
    a1.get();
    cout << "\033[2J\033[1;1H";
    int ch = 0;
    do
    {
        cout << "0. Exit" << endl;
        cout << "1. Insert" << endl;
        cout << "2. Delete" << endl;
        cout << "3. Linear Search" << endl;
        cout << "4. Binary Search" << endl;
        cin >> ch;

        switch (ch)
        {
        case 1: //Insert;
            cout << "\033[2J\033[1;1H";
            cout << "1. Insert at Start" << endl;
            cout << "2. Insert in Middle" << endl;
            cout << "3. Insert in End" << endl;
            cin >> ch;
            switch (ch)
            {
            case 1: // insert at start;

                cout << "\033[2J\033[1;1H";
                a1.unshift();
                cout << "New Array: ";
                a1.display();
                cout << "\n";
                break;
            case 2: // insert at middle;
                cout << "\033[2J\033[1;1H";
                a1.shiftmiddle();
                a1.display();
                cout << "\n";

                break;
            case 3: //inser at end;
                cout << "\033[2J\033[1;1H";
                a1.shift();
                a1.display();
                cout << "\n";
                break;
            default:
                cout << "Invalid Option" << endl;
            }
            break;
        case 2: // Delete;
            cout << "\033[2J\033[1;1H";
            cout<<"1. Delete at Start\n";
            cout<<"2. Delete at Middle\n";
            cout<<"3. Delete at End\n";
            cin>>ch;
            switch(ch){
                case 1: // Del at start;
                cout << "\033[2J\033[1;1H";
                a1.deletestart();
                a1.display();
                cout<<"\n";
                break;
                case 2: // det at middle;
                cout << "\033[2J\033[1;1H";
                a1.deletemiddle();
                a1.display();
                cout<<"\n";
                
                break;
                case 3: // del at end;
                cout << "\033[2J\033[1;1H";
                a1.deleteend();
                a1.display();
                cout<<"\n";
                break;
                default:cout<<"Invalid Option";
            }
            
            break;
        case 3: // Linerar Search;
            cout << "\033[2J\033[1;1H";
            a1.linerar();
            break;
        case 4: //Binary Search;
        cout << "\033[2J\033[1;1H";
            a1.binary();
            
            break;
        default:
            cout << "Invalid Option\n";
        }
    } while (ch != 0);
}