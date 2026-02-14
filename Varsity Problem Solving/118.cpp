
"Enter number of rows: 8
69
  69
    69
      69
        69
          69
            69
              69"	  	
              
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << ""Enter number of rows: "";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++) // j<=i
        {
            if (j == i) // i==j
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
