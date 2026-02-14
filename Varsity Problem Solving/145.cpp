
// Write a program that prints first n prime numbers (n is input). E.g. for n = 5 it should print: 2,3,5,7,11,	  	

#include <iostream>
using namespace std;
int main()
{
  int i, j, prime, n, sum = 0;
  cout << ""Enter N: "";
  cin >> n;
  cout << ""First "" << n << "" prime:  "";
  for (i = 2;; i++)
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
      sum = sum + 1;
      if (sum < n)
      {
        cout << "","";
      }
      if (sum == n)
      {
        return 0;
      }
    }
  }
}