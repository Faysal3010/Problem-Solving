

"3. Write a C program to compute the sum of the following series using nested loop 
1/1+(1/1+1/2)+(1/1+1/2+1/3)+⋯+(1/1+1/2+⋯+1/n)
"	  	"// 3. Write a C program to compute the sum of the following series using nested loop
// 1/1+(1/1+1/2)+(1/1+1/2+1/3)+⋯+(1/1+1/2+⋯+1/n)
"

#include <iostream>
using namespace std;
int main()
{
    int n , i, j;
    float term, sum = 0;
    cout << ""Enter n: "";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        term = 0;
        for (j = 1; j <= i; j++)
            term += (1.0 / j);
        sum += term;
    }
    cout << sum << endl;
    return 0;
}