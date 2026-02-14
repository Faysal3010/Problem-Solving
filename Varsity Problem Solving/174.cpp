
//Compute the value of a^b using recursion, where a and b are integers.
#include <iostream>
#include <cmath>
using namespace std;

int ab(int a, int b)
{
  if (b == 0)
    return 1;
  return a * ab(a, b - 1);
}
int main()
{
  int a, b;
  cout << ""Enter a^b: "";
  cin >> a >> b;
  cout << a << ""^"" << b << "" = "" << ab(a, b);
  return 0;
}

