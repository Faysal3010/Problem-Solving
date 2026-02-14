
"*********
 *******
  *****
   ***
    *"	  	
    
"12345678901
 234567890
  1234567
   89012
    345
     6

     "


#include <iostream>
using namespace std;
int main()
{
    int n = 7, i, j, number = 1;
    // cout << ""Enter rows: "";
    // cin >> n;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j < i; j++)
        {
            cout << "" "";
        }
        for (j = 1; j <2*(n-i); j++)
        {
            cout << number;
            number = (number + 1) % 10;
        }
        cout << endl;
    }
    return 0;
}