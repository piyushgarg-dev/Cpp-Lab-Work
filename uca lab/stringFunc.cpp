/*
String Functions

1.strlen - done
2.strcmp - done
3.strcmpi - done
4.strcat - done
5.strrev - done
6.strcpy - done
7.strupr
8.strlwr

*/
#include <iostream>
using namespace std;

int myStrlen(char str[])
{
    int len = 0;
    while (str[len] != '\0')
    {
        len++;
    }
    return len;
}
int myStrcmp(char str1[], char str2[])
{
    int len1 = 0;
    int len2 = 0;
    while (str1[len1] != '\0')
    {
        len1++;
    }
    while (str2[len2] != '\0')
    {
        len2++;
    }
    if (len1 != len2)
    {
        return 1;
    }
    else
    {
        for (int i = 0; i < len1; i++)
        {
            if (str1[i] != str2[i])
            {
                return int(str1[i] - str2[i]);
            }
        }
        return 0;
    }
}

int myStrcmpi(char str1[], char str2[])
{
    int len1 = 0;
    int len2 = 0;
    while (str1[len1] != '\0')
    {
        len1++;
    }
    while (str2[len2] != '\0')
    {
        len2++;
    }
    if (len1 != len2)
    {
        return 1;
    }
    else
    {
        for (int i = 0; i < len1; i++)
        {

            if (str1[i] - str2[i] == 32 || str1[i] - str2[i] == -32)
                continue;

            if (str1[i] != str2[i])
            {
                return int(str1[i] - str2[i]);
            }
        }
        return 0;
    }
}

void myStrcat(char *str1, char *str2)
{
    int len1, len2 = 0;

    while (*str1 != '\0')
    {
        len1++;
        str1++;
    }

    while (*str2 != '\0')
    {
        *str1 = *str2;
        str1++;
        str2++;
    }
}

void myStrrev(char *str)
{
    int len = 0;
    while (*str != '\0')
    {
        len++;
        str++;
    }
    for (int i = 0; i < len; i++)
    {
        str--;
        cout << *str;
    }
}

void myStrcpy(char *str, char *value)
{
    while (*value != '\0')
    {
        *str = *value;
        str++;
        value++;
    }
}
void myStrupr(char *str){
    while(*str != '\0'){
        if(int(*str)>=97 && int(*str)<=122)
        *str-=32;

        str++;
    }
}

void myStrlwr(char *str){
    while(*str != '\0'){
        if(int(*str)>=65 && int(*str)<=90)
        *str+=32;

        str++;
    }
}

int main()
{
   char str1[100],str2[100];

   cout<<"Enter String 1: ";
   cin>>str1;

   cout<<"Enter String 2: ";
   cin>>str2;

   cout<<"Equal (Case-Sensetive) : ";
   if(!myStrcmp(str1,str2)){
       cout<<"True"<<endl;
   }else{
       cout<<"False"<<endl;
   }

   cout<<"Equal (Case-InSensetive) : ";
    if(!myStrcmpi(str1,str2)){
       cout<<"True"<<endl;
   }else{
       cout<<"False"<<endl;
   }

   cout<<"Length (Str 1): "<<myStrlen(str1)<<endl;
    cout<<"Length (Str 2): "<<myStrlen(str2)<<endl;

    myStrlwr(str1);
    cout<< "Lower (Str 1): "<<str1<<endl;

    myStrlwr(str2);
    cout<< "Lower (Str 2): "<<str2<<endl;

    myStrupr(str1);
    cout<< "Upper (Str 1): "<<str1<<endl;

    myStrupr(str2);
    cout<< "Upper (Str 2): "<<str2<<endl;

    myStrcat(str1,str2);
    cout<<"Concatinating Str1 and Str2"<<endl;
    cout<<"Str1 = "<<str1<<endl;




}