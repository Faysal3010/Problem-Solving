
// C program to print all prime numbers between 1 and n.	  	

#include <iostream>
using namespace std;
int main()
{
  int i, j, prime, n;
  cout << ""Enter 1 to N: "";
  cin >> n;
  for (i = 2; i <= n; i++)
  {
    prime = 0;
    for (j = 2; j <= i / 2; j++)
    {
      if (i % j == 0)
      {
        prime = 1;
        break;
      }
    }
    if (prime == 0)
    {
      cout << "" "" << i;
    }
  }
  return 0;
}