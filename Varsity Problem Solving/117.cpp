

"Try yourself 2b: Write a C program to print a hollow right angled triangle of height n. For e.g. for n=7 print:
*
**
* *
*  *
*   *
*    *
*******
"	  	

"Enter number of rows: 8
69
69 69
69    69
69        69
69            69
69                 69
69                     69
6969696969696969

Enter number of rows: 8
+
++
+ +
+   +
+      +
+        +
+          +
++++++++
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
        for (int j = 1; j <= i; j++)//  j<=n
        {
            if (i == n or j == 1 or i==j)
            {
                cout << ""69"";
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
	  	#include <iostream>
using namespace std;

int main()
{
    int n = 16;
    // cout << ""Enter n: "";
    // cin >> n;
    int space = n - 1;
    for (int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= space; j++){
            cout << "" "" ;
        }
        for (int j = 1; j <= n; j++)
        {
            if (i == j or i == n or j == 1 or j == n - i + 1 or i == 1 or j == n or i == n / 2 or j == n / 2)
                cout << ""O"";
            else
            {
                cout << "" "";
            }
        }
        space--;
        cout << endl;
    }
    return 0;
}