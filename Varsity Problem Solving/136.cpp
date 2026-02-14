
"   1
   234
  56789
 0123456
789012345
"	  	

#include <iostream>
using namespace std;
int main()
{
    int n, i, j, space, number = 1;
    cout << ""Enter n: "";
    cin >> n;
    space = n - 1;
    for (i = 1; i <= n; i += 2)
    {
        for (j = 1; j <= space; j++)
        {
            cout << "" "";
        }
        for (j = 1; j <= i; j++)
        {
            cout << number;
            number = (number + 1) % 10;
        }
        space--;
        cout << endl;
    }
    return 0;
}

--------------------------------------------------
//     1
//    234
//   56789
//  0123456
// 789012345

#include <iostream>
using namespace std;
int main()
{
    int n=7, i, j, space, number = 1;
    cout << ""Enter rows: "";
    cin >> n;
    space = n - 1;
    for (i = 1; i <= n; i ++)
    {
        for (j = 1; j <= space; j++)
        {
            cout << "" "";
        }
        for (j = 1; j <= 2*i-1; j++)
        {
            cout << number;
            number = (number + 1) % 10;
        }
        space--;
        cout << endl;
    }
    return 0;
}

