// Write a C program to compute the super-factorial of a given number n,sf(n)= 1!*2!*3!*…n!
#include <iostream>
using namespace std;
int main()
{
    int  n;
    long double mult = 1;
    cout << "Enter n: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cout << i << "!";
        for (int j = 1; j <= i; j++)
        {
            mult *= j;
            // cout << "*";
        }

        if (i < n)
            cout << "*";
    }
    cout << " = " << mult;
    return 0;
}