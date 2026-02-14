
//  Write a C program to compute and print the sum of all prime numbers between m and n (m, n are inputs)
#include <iostream>
using namespace std;
int main()
{
  int m, n, isPrime, sum = 0;
  cout << ""Enter m: "";
  cin >> m;
  cout << ""Enter n: "";
  cin >> n;
  cout << ""All prime numbers between "" << m << "" and "" << n << "" are : "";
  for (m; m <= n; m++)
  {
    isPrime = 0;
    for (int j = 2; j <= m / 2; j++)
    {
      if (m % j == 0)
      {
        isPrime = 1;
        break;
      }
    }
    if (isPrime == 0)
    {
      cout << m << "" "";
      sum = sum + m;
    }
  }
  cout << endl;
  cout << ""Sum: "" << sum;
  return 0;
}
