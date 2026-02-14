
// Write a C program to print all natural numbers from n to 1 (i.e., from upper to lower) using recursion.
#include <iostream>
#include <cmath>
using namespace std;

void n_To_1(int upper, int lower)
{
  if (lower > upper)
  {
    return;
  }
  cout << upper << "" "";
  n_To_1(upper - 1, lower);
}
int main()
{
  int n;
  cout << ""Enter n: "";
  cin >> n;
  n_To_1(n, 1);
  return 0;
}