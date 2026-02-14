// 2. Hollow square pattern for N lines. E.g. for N=4:

// ****
// *   *
// *   *
// ****




#include <iostream>
using namespace std;
int main()
{
    cout << "Enter number of rows or columns: ";
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == 1 or i == n or j == 1 or j == n)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
-------------------------------------------------------------
#include <iostream>
using namespace std;
int main()
{
    cout << "Enter number of rows or columns: ";
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == 1 or i == n)
            {
                cout << "-";
            }
            else if (j == 1 or j == n)
            {cout<<"|";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
----------------------------------------------------------------
Enter number of rows or columns: 8
--------
|******|
|******|
|******|
|******|
|******|
|******|
--------

#include <iostream>
using namespace std;
int main()
{
    cout << "Enter number of rows or columns: ";
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == 1 or i == n)
            {
                cout << "-";
            }
            else if (j == 1 or j == n)
            {cout<<"|";
            }
            else
            {
                cout << "*";
            }
        }
        cout << endl;
    }
    return 0;
}