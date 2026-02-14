
//    Write a C code to find the sum of the following series using RECURSIVE FUNCTIONS:
//  1^2 + 2^2 + 3^2 + … + N^2

#include <iostream>
#include <cmath>
using namespace std;
int sum = 0;
void naturalNumber(int lower, int upper)
{
  if (lower > upper)
  {
    cout << "" = "" << sum;
    return;
  }
  sum += pow(lower, 2);
  cout << pow(lower, 2);
  if (lower < upper)
  {
    cout << "" + "";
  }
  naturalNumber(lower + 1, upper);
}
int main()
{
  int n;
  cout << ""Enter n: "";
  cin >> n;
  naturalNumber(1, n);
  return 0;
}
