
// Compute the sum of the above geometric progression using recursion.
#include <iostream>
#include <cmath>
using namespace std;
double series(int r, int n)
{
  if (n == 0)
  {
    return 1;
  }
  return pow(r, n) + series(r, n - 1);
}
int main()
{
  int n, r;
  cout << ""Enter r: "";
  cin >> r;
  cout << ""Enter n: "";
  cin >> n;
  cout << ""Sum = "" << series(r, n);
  return 0;
}