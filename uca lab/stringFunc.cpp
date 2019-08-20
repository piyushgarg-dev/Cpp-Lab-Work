/*
String Functions!
*/
#include <iostream>
using namespace std;

int myStrlen(char str[]){
    int len = 0;
    while(str[len]!='\0'){
        len++;
    }
    return len;
}
int myStrcmp(char str1[], char str2[]){
    int len1 = 0;
    int len2 = 0;
    while(str1[len1]!='\0'){
        len1++;
    }
    while(str2[len2]!='\0'){
        len2++;
    }
    if(len1!=len2){
        return 0;
    }
    else{
        for(int i=0; i<len1; i++){
            if(str1[i]!=str2[i]){
                return int(str1[i]-str2[i]);
            }
        }
        return 1;
    }
}

int myStrcmpi(char str1[], char str2[]){
    int len1 = 0;
    int len2 = 0;
    while(str1[len1]!='\0'){
        len1++;
    }
    while(str2[len2]!='\0'){
        len2++;
    }
    if(len1!=len2){
        return 0;
    }
    else{
        for(int i=0; i<len1; i++){

            if(str1[i]-str2[i]==32 || str1[i]-str2[i] == -32)
            continue;

            if(str1[i]!=str2[i]){
                return int(str1[i]-str2[i]);
            }
        }
        return 1;
    }
}



int main(){
    cout<<myStrcmp("Piyush","Piyush")<<endl;
}