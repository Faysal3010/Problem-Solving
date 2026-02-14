// Try Yourself 2: Write a C program to read 3 integers and compute their LCM.

#include <iostream>
using namespace std;
int main()
{
    int n1, n2, n3, i;
    cin >> n1 >> n2 >> n3;
    i = max(max(n1, n2), n3);
    while (1)
    {
        if (i % n1 == 0 and i % n2 == 0 and i % n3 == 0)
        {
            break;
        }
        i++;
    }
    cout << i;
    return 0;
}