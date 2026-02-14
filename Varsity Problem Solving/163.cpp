
// Find the sum of the following series using user-defined function:  1/1! + 2/2! + 3/3! + …… +1/N!
#include <iostream>
// #include <cmath>
using namespace std;

void Series(int num1)
{
  float sum = 0, factorial = 1;
  for (int i = 1; i <= num1; i++)
  {
    cout << i << ""/"" << i << ""!"";
    factorial *= i;
    sum += i / factorial;
    if (i < num1)
      cout << "" + "";
  }
  cout << "" = "" << sum;
}
int main()
{
  int num1;
  cout << ""Enter N: "";
  cin >> num1;
  Series(num1);
  return false;
}