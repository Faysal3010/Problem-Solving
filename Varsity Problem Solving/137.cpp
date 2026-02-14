
//      0
//     01
//    010
//   0101
//  01010

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
                if (j % 2 == 0)
                    cout << ""1"";
                else
                {
                    cout << ""0"";
                }
            }
            cout << endl;
            space--;
        }
    }
    return 0;
}