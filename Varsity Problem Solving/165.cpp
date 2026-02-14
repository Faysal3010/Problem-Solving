

// Compute the sum of the following geometric progression using a function with 2 parameters r and n:
// r^0(1) + r^1 + r^2 + … + r^n (read the values of r and n from user)

#include <iostream>
#include <cmath>
using namespace std;
void series(int a, int b)
{
  int sum = 0;
  for (int i = 0; i <= b; i++)
  {
    cout << a << ""^"" << i;
    sum += pow(a, i);
    if (i < b)
      cout << "" + "";
  }
  cout << "" = "" << sum;
}
int main()
{
  int n1, n2;
  cout << ""Enter r,n: "";
  cin >> n1>> n2;
  series(n1, n2);
  return 0;
}