// Enter n: 6
// 1/1!+2/2!+3/3!+4/4!+5/5!+6/6! = 2.71667


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
        cout << i << "/" << i << "!";
        factorial *= i;
        sum += i / factorial;
        if (i < n)
            cout << "+";
    }
    cout << " = " << sum;
    return 0;
}