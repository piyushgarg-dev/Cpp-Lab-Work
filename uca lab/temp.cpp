#include <iostream>
using namespace std;
int main()
{

char str[]="Piyush";
  char str1[100];
  int len=0;
  
  while(str[len]!='\0'){
    len++;
  }
  //cout<<len;
  int index2=len-1;
  for(int i=0; i<len; i++){
    str1[index2] = str[i];
    index2--;
  }
  
  
 for(int i=0; i<len; i++){
   cout<<str1[i];
 }


    return 0;
}