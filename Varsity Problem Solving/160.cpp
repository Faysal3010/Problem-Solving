
// C program to compute the integer resulting from rounding a number n (using function)
#include <iostream>
using namespace std;

int round(float num1)
{
  int i = num1;
  if (num1 - i >= 0.5)return (i + 1);
  else return  i;
}

int main()
{
  float x;
  cout << ""Enter floating point number: "";
  cin >> x;
  cout << round(x) << endl;
  return 0;
}