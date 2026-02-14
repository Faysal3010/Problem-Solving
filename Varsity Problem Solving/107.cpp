//  Write a C program to compute the sum of the series: 1/1! + 1/2! + 1/3! + … + 1/n! where n is an input.


#include <iostream>
using namespace std;
int main()
{
    double sum = 0, factorial = 1;
    int n;
    cout << "Enter n: ";
    cin >> n;
    if (n < 1)
    {
        cout << "Please enter possition number" << endl;
        return 1;
    }
    for (int i = 1; i <= n; i++)
    {
        cout << "1/" << i << "!";
        factorial *= i;
        sum += 1 / factorial;
        if (i < n)
            cout << "+";
    }
    cout << " = " << sum;
    return 0;
}