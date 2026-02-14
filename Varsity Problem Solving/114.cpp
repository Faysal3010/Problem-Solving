"Enter number of rows: 8
Enter number of colums: 4
----
|  |
|  |
|  |
|  |
|  |
|  |
----
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
        for (int j = 1; j <= m; j++)
        {
            if (i == 1 or i == n)
            {
                cout << ""-"";
            }
            else if (j == 1 or j == m)
            {cout<<""|"";
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

-------------------------------------------------
#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cout << ""Enter number of rows: "";
    cin >> n;
    cout << ""Enter number of colums: "";
    cin >> m;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (i == 1 or i == n or j == 1 or j == m)
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