


" Write separate C programs to print the following patterns (read number of rows from user):
   

    * * * * *
     * * * *
      * * *
       * *
        *   

"	  	

#include <iostream>
using namespace std;
int main()
{
    int n , i, j;
    cout << ""Enter number of rows: "";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j < i; j++)
        {
            cout << "" "";
        }
        for (j = 1; j <= 1 + n - i; j++)
        {
            cout << ""+ "";
        }
        cout << endl;
    }
    return 0;
}