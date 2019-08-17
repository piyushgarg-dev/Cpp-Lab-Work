#include <iostream>
using namespace std;

int cube(int n)
{

    return n * n * n * n;
}

int isPrime(int n)
{
    int flag = 1;
    int i = 0;
    for (i = 2; i <= n - 1; i++)
    {
        if (n % i == 0)
        {
            //not Prime
            return 0;
        }
    }

    if (i == n)
    {
        return 1;
    }
    return 0;
}

int isArmstrong(int n)
{
    //n=135;
    int number = n;
    int newnum = 0;
    int r;
    int x, y, z;

    while (n > 0)
    {
        r = n % 10;
        newnum += cube(r);
        n = n / 10;
    }
    // cout << newnum << " " << number << endl;

    if (newnum == number)
    {
        return 1;
    }
    return 0;
}

int main()
{
    int flag = 0;
    int primeCount = 0;
    int comCount = 0;
    int armsNumber = 0;

    for (int n = 1000; n <= 2000; n++)
    {

        if (isPrime(n))
        {
            //cout<<"1";
            primeCount++;
        }

        if (isArmstrong(n))
        {
            armsNumber++;
            cout << "Arm: " << n << endl;
        }
    }
    cout << "Total Prime: " << primeCount << endl;
    cout << "Total Arm: " << armsNumber << endl;
}