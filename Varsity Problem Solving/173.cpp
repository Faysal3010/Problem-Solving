
//Write a C program using recursive function to find the inverse product of 1st n natural numbers. E.g. for n= 5, the function should return (1/5) * (1/4) *(1/3) * (1/2) *(1/1) = 1/120 =0.00833
#include <iostream>
#include <cmath>
using namespace std;
float sum = 1;
void naturalNumber(float upper, float lower)
{
  if (lower > upper)
  {
    cout << "" = "" << sum;
    return;
  }
  sum *= 1 / upper;
  cout << ""1/"" << upper;
  if (lower < upper)
  {
    cout << "" * "";
  }
  naturalNumber(upper - 1, lower);
}
int main()
{
  int n;
  cout << ""Enter n: "";
  cin >> n;
  naturalNumber(n, 1);
  return 0;
}