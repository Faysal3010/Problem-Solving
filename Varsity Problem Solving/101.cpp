// Write a C program to find Greatest Common Divisor (GCD ) of two given integers.
//  GCD of two integers is the highest number that totally divides those two integers. E.g. GCD of 15 and 25 is 5.

#include <iostream>
using namespace std;
int main()
{
    int n1, n2;
    cout << "Enter two integers: ";
    cin >> n1 >> n2;
    while (n2 != 0)
    {
        int temp =n2;
        n2=n1%n2;
        n1=temp;
    }
    cout << "GCD: " <<n1;
}