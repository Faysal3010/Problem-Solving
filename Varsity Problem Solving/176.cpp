
// Compute the sum of the following geometric progression without recursion:
// 1 + r + r^2 + … + r^n (read the values of r and n from user)

#include <iostream>
#include <cmath>
using namespace std;

int r_n(int n, int r)
{
  return ((1 - pow(r, n + 1)) / (1 - r));
}
int main()
{
  int n, r;
  cout << ""Enter r: "";
  cin >> r;
  cout << ""Enter n: "";
  cin >> n;
  cout << r_n(n, r);
  return 0;
}