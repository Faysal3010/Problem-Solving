
// Write a C program to compute and print the sum of first n perfect numbers.	  	

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
  int count = 0, i = 2, j, sum = 0, n, isPrime;
  cout << ""Enter n: "";
  cin >> n;
  cout << ""First "" << n << "" number: "";
  while (count <= n)
  {
    isPrime = 0;
    for (j = 2; j <= i / 2; j++)
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
      cout << "" "" << x;
      sum += x;
      count++;
      if (count == n)
      {
        cout << endl;
        cout << ""Sum: "" << sum << endl;
        return 0;
      }
    }
    i++;
  }
}