"Enter number of rows: 8
+
+
+
+
+
+
+
++++++++"	  	 

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << ""Enter number of rows: "";
    cin >> n;
    // cout << ""Enter number of colums: "";
    // cin >> m;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)//  j<=i
        {
            if (i == n or j == 1)
            {
                cout << ""+"";
            }
            else
            {
                cout << ""  "";
            }
        }
        cout << endl;
    }
    return 0;
}
