
"    * 
    *** 
  *****
 *******
*********
 *******
  *****
   ***
    *
    "	  	

#include <iostream>
using namespace std;
int main()
{
    int n = 7, i, j;
    // cout << ""Enter number of rows: "";
    // cin >> n;
    int space = n - 1;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= space; j++)
        {
            cout << "" "";
        }
        {
            for (j = 1; j <= i; j++)
            {
                cout << ""+ "";
            }
            cout << endl;
            space--;
        }
    }
    for (i = 1; i <= n; i++)
    {

        for (j = 1; j <= i; j++)
        {
            cout << "" "";
        }
        for (j = 1; j <= n - i; j++)
        {
            cout << ""+ "";
        }
        cout << endl;
    }
    return 0;
}