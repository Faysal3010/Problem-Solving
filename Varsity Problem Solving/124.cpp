

" Write a C program to print hollow rhombus star pattern of N lines. E.g. for N=5 print:


    *****
   *   *
  *   *
 *   *
*****

"	

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << ""Enter number of rows: "";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {

            cout << "" "";
        }
        for (int j = 1; j <= n; j++)
        {
            if (i == 1 or i == n or j == 1 or j == n)
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