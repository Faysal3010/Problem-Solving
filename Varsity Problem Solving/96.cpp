// Write a C program to compute the quadruple factorial of a given number n,q(n)=  (2n)!/n!


#include <iostream>
using namespace std;
int main()
{
    double n, mul = 1, mult = 1;
    cout << "Enter two integers: ";
    cin >> n;
    for (int i = 1; i <= 2 * n; i++)
    {
        mul *= i;
    }
    for (int i = 1; i <= n; i++)
    {
        mult *= i;
    }
    cout << "q(n)=(2n)!/n!= " << mul / mult;
    return 0;
}