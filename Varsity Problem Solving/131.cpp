

"     A
     A B
    A B C
   A B C D
  A B C D E 
             
"	  	"Enter number of rows: 30
                             A 
                            A B 
                           A B C 
                          A B C D 
                         A B C D E 
                        A B C D E F 
                       A B C D E F G 
                      A B C D E F G H 
                     A B C D E F G H I 
                    A B C D E F G H I J 
        
"


#include <iostream>
using namespace std;
int main()
{
    int n, i, j;
    cout << ""Enter number of rows: "";
    cin >> n;
    int space = n - 1;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= space; j++)
        {
            cout << "" "";
        }
        {
            for (j = 1; j <= i; j++)
            {
                cout << (char)(64 + j) << "" "";
            }
            cout << endl;
            space--;
        }
    }
    return 0;
}