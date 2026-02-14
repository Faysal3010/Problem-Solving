// 5. Write a C program that prints all even numbers between m and n (m,n are user inputs) except the ones 
// which are divisible by 3. [Hint: Use continue statement within a loop] Sample input/output:
// Enter m: 99
// Enter n: 116
// All even numbers between 100 and 112 except those divisible by 3 are: 100, 104, 106, 110, 112, 116,



#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cout << "Enter m: ";
    cin >> m;
    cout << "Enter n: ";
    cin >> n;
    if (m >= n)
    {
        for (n; n <= m; n++)
        {
            if (n % 2 == 0 and n % 3 != 0)
            {
                cout << n << " ";
            }
        }
    }
    else if (n > m)
    {
        for (m; m <= n; m++)
        {
            if (m % 2 == 0 and m % 3 != 0)
            {
                cout << m << " ";
            }
        }
    }
    return 0;
}