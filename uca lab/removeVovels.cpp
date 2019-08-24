#include <iostream>
using namespace std;

// void removeVovels(char *str){
//     int count=0;
//     int index=1;
//     while(*str!='\0'){
//         if(*str=='a'||*str=='e'||*str=='i'||*str=='o'||*str=='u'||*str=='A'||*str=='E'||*str=='I'||*str=='O'||*str=='U'){
//            *str =' ';
//             count++;
//         }
//         str++;
       
//     }
    
// }

void removeVovels(char str[]){
    int i,j = 0;
    while(str[i]!='\0'){
         if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'){
          cout<<str[i];   
         }
         i++;
    }
    cout<<str<<endl;
}


int main(){
    char str[40];
    cout<<"Enter a string: ";
    cin>>str;
    
    int len=0;
    while(str[len]!='\0'){
        len++;
    }

    for(int i=0; i<len; i++){
         if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'){
             for(int j=i; j<len; j++){
                 str[j] = str[j+1];
             }
             len--;
         }
    }

    cout<<str;


}