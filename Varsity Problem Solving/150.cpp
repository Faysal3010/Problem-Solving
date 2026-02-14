
//Write a C program to print the n-th perfect number where n is an input.

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
  int count = 0, i = 2, j, n, isPrime;
  cout << ""Enter n: "";
  cin >> n;
  cout << n << ""-th perfect number: "";
  while (count <= n)
  {
    isPrime = 0;
    for (j = 2; j < i ; j++)
    {
      if (i % j == 0)
      {
        isPrime = 1;
        break;
      }
    }
    if (isPrime == 0)
    {
      double x = (pow(2, i - 1)) * (pow(2, i) - 1);
      count++;
      if (count == n)
      {
        cout << x;
        return 0;
      }
    }
    i++;
  }
}
