

" Write a C program to print a right justified hollow right angled triangle of height n. For e.g. for n=7 print:
        *
     *  *
    *   *
   *    *
  *     *
 *      *
*******
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
        for (int j = 1; j <= n; j++)
        {
            if (i == n or j == n or i == (n + 1) - j or j == (n + 1) - i)
                cout << ""+"";
            else
            {
                cout << "" "";
            }
        }
        cout << endl;
    }

    return 0;
}