#include <iostream>
using namespace std;

int getNumLength(int num)
{
  int temp = num;
  int length = 0;
  while (num > 0)
  {
    num = num / 10;
    length++;
  }
  return length;
}

char single_digit[][11] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten"};
char two_digit[][11] = {"", "", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninty", "", "eleven", "twelve", "thirteen", "forteen", "fifteen", "sixteen", "seventeen", "eighteen", "ninteen"};

int main()
{
  int num;

  while (1)
  {
    cout << "\nEnter Number: ";
    cin >> num;
    int len = getNumLength(num);
    if (len > 4)
    {
      cout << "Please enter a number less than 4 digits" << endl;
      continue;
    }
    if (num >= 10 && num <= 19)
    {
      cout << two_digit[num];
      continue;
    }

    if (len == 1 || num == 10)
    {
      cout << single_digit[num];
    }
    if (len == 2 && num >= 20)
    {
      cout << two_digit[num / 10] << " " << single_digit[num % 10] << endl;
    }
    if (len == 3)
    {
      cout << single_digit[num / 100] << " hundred ";
      num = num - (num / 100) * 100;
      len = getNumLength(num);
      if (len == 1 || num == 10)
      {
        cout << single_digit[num];
      }
      if (num >= 10 && num <= 19)
      {
        cout << two_digit[num];
        continue;
      }
      if (len == 2 && num >= 20)
      {
        cout << two_digit[num / 10] << " " << single_digit[num % 10] << endl;
      }
    }

    if (len == 4)
    {
      cout << single_digit[num / 1000] << " thousand ";
      num = num - (num / 1000) * 1000;
      //cout<<"Num"<<num;
      len = getNumLength(num);
      //cout<<"Length: "<<len;
      if (len == 1)
      {
        cout << single_digit[num];
      }
      if (len == 2)
      {
        if (num >= 10 && num <= 19)
        {
          cout << two_digit[num];
          continue;
        }
        num = num - (num / 100) * 100;
        cout << two_digit[num / 10] << " " << single_digit[num % 10] << endl;
      }
      if (len == 3)
      {
        cout << single_digit[num / 100] << " hundred ";
        num = num - (num / 100) * 100;

        len = getNumLength(num);
        if (len == 1 || num == 10)
        {
          cout << single_digit[num];
        }
        if (num >= 10 && num <= 19)
        {
          cout << two_digit[num];
          continue;
        }
        if (len == 2 && num >= 20)
        {
          cout << two_digit[num / 10] << " " << single_digit[num % 10] << endl;
        }
      }
    }
  }

  return 0;
}
