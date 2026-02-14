
"1
23
456
7890
12345
"	  	

#include <iostream>
using namespace std;
int main()
{
    int n , i, j, number = 1;
    cout << ""Enter number of rows: "";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        for (j = 0; j < i; j++)
        {
            cout << number;
            number = (number + 1) % 10;
        }
        cout << endl;
    }
    return 0;
}