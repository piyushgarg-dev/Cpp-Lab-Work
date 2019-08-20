/*
String Functions

strlen - done
strcmp - done
strcmpi - done
strcat - done
strrev - done
strcpy - done
strupr
strlwr

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
        return 0;
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
        return 1;
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
        return 0;
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
        return 1;
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

int main()
{
}