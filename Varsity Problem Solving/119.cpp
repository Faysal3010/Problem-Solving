

"Enter number of rows: 9
111111111
22222222
3333333
444444
55555
6666
777
88
9"	  	


#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << ""Enter number of rows: "";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= (n+1) - i; j++)
        {
            // if ( j == (n - i))
            // {
            // }
        cout << i;
            // else
        }

        cout << endl;
    }
    return 0;
}