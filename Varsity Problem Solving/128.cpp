

" 
        1
      1 2
     1 2 3
   1 2 3 4
  1 2 3 4 5
"	  	

#include <iostream>
using namespace std;
int main()
{
    int n, i, j;
    cout << ""Enter number of rows: "";
    cin >> n;
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
                cout << j<<"" "";
            }
            cout << endl;
            space--;
        }
    }
    return 0;
}