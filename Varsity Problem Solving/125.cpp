

" Write a C program to print a hollow parallelogram pattern of size m*n. E.g for m=10, n=5 print:
    **********
   *        *
  *        *
 *        *
**********
"	  	


"Enter number of rows: 4
Enter number of colums: 8

   ++++++++
  +       +
 +       +
++++++++
"

#include <iostream>
using namespace std;
int main()
{
    int n,m;
    cout << ""Enter number of rows: "";
    cin >> n;
    cout << ""Enter number of colums: "";
    cin >> m;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {

            cout << "" "";
        }
        for (int j = 1; j <= m; j++)
        {
            if (i == 1 or i == n or j == 1 or j == m)
            {
                cout << ""+"";
            }
            else
            {
                cout << "" "";
            }
        }
        cout << endl;
    }
    return 0;
}