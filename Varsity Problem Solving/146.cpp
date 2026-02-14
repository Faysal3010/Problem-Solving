
// Write a C program to print all prime numbers between 1 and n in reverse order (n is an input). 
// Sample input/output:
// Enter n: 20
// All prime numbers between 1 and 20 (in reverse order):19, 17, 13, 11, 7, 5, 3, 2,


#include <iostream>
using namespace std;
int main()
{
  int n, i, j, prime = 0;
  cout << ""Enter n: "";
  cin >> n;
  cout << "" All prime numbers between 1 and "" << n << "" (in reverse order): "";
  for (i = n; i >= 2; i--)
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
      if (2 < i)
      {
        cout << "","";
      }
    }
  }
  return 0;
}