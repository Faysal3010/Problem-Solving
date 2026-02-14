
// Enter rows: 5
// *********
// -*******
// --*****
// ---***
// ----*

#include <iostream>
using namespace std;
int main()
{
    int n , i, j, number = 1;
    cout << ""Enter rows: "";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j < i; j++)
        {
            cout << ""-"";
        }
        for (j = 1; j <=2*(n-i)+1; j++)
        {
            cout << '*';
        //    number = (number + 1) % 10;
        }
        cout << endl;
    }
    return 0;
}
