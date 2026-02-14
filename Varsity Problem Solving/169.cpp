
// Code that computes the factorial of a number using recursive function.

#include <iostream>
#include <cmath>
using namespace std;

int factorial(int n)
{
  if (n == 1)
    return 1;
  else
    return n * factorial(n - 1);
}
int main()
{
  int n;
  cout << ""Enter n: "";
  cin >> n;
  cout << factorial(n);
  return 0;
}