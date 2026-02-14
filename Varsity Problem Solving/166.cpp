

// Compute the sum of the following geometric progression using a function with 2 parameters r and n:
// r^0(1) + r^1 + r^2 + … + r^n (read the values of r and n from user)

#include <iostream>
// #include <cmath>
using namespace std;
void reverse(int a)
{
  cout<<""reverse: "";
  while (a != 0)
  {
    int lastNumber = a % 10;
    cout << lastNumber;
    a /= 10;
  }
}
int main()
{
  int n1;
  cout << ""Enter int: "";
  cin >> n1;
  reverse(n1);
  return 0;
}
