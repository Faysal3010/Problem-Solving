
// C program to print all perfect numbers between 1 to n:	  	

#include <iostream>
using namespace std;
int main()
{
  int i, n, j, sum;
  cout << ""Enter 1 to n: "";
  cin >> n;
  for (i = 1; i <= n; i++)
  {
    sum = 0;
    for (j = 1; j < i; j++)
    {
      if (i % j == 0)
      {
        sum += j;
      }
    }
    if (sum == i)
    {
      cout << i << "" "";
    }
  }
  return 0;
}