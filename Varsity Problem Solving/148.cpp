
"Write a C program to print the first n perfect numbers where n is an input."	

#include <iostream>
using namespace std;
int main()
{
  int i, j, n, sum = 0, count = 0;
  cout << ""Enter n: "";
  cin >> n;
  cout << ""First "" << n << "" number: "";
  for (i = 1;; i++)
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
      count++;
      if (count == n)
      {
        return 0;
      }
    }
  }
  return 0;
}

----------------------------------------------------------
//super fast 

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
  int count = 0, i = 2, j, sum, n, isPrime;
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
      count++;
      if (count == n)
      {
        return 0;
      }
    }
    i++;
  }
}