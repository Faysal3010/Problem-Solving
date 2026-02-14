
// Code that computes the n-th Fibonacci number using recursive function.
// 0 1 1 2 3 5 8 13
#include <iostream>
#include <cmath>
using namespace std;

int Fibonacci(int n)
{
  if (n == 1)
    return 0;
  else if (n == 2)
    return 1;
  else
    return Fibonacci(n - 1) + Fibonacci(n - 2);
}
int main()
{
  int n;
  cout << ""Enter n: "";
  cin >> n;
  cout << Fibonacci(n);
  return 0;
}
