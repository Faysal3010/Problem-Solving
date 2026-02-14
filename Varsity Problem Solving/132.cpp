

"        A
       ABC
      ABCDE
    ABCDEFG
  ABCDEFGHI"	 
  

#include <iostream>
using namespace std;
int main()
{
    int n, i, j, space;
    cout << ""Enter n: "";
    cin >> n;
    space = n - 1;
    for (i = 1; i <= n; i+=2)
    {
        for (j = 1; j <= space; j++)
        {
            cout << "" "";
        }
        for (j = 1; j <= i; j++)
        {
            cout << (char)(j + 64);
        }
        space--;
        cout << endl;
    }
    return 0;
}
