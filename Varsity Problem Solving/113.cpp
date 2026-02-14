"Try yourself 1a: Write a C program to print a rectangle pattern of size m*n. For e.g. for m=10, n=5 print:
**********
**********
**********
**********
**********
"

#include <iostream>
using namespace std;

int main()
{
    int n,m;
    cout << ""Enter row: "";
    cin >> n;
    cout << ""Enter column: "";
    cin >> m;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cout << "" + "";
        }
        cout << endl;
    }
    return 0;
}