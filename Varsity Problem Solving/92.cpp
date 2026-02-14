// Try Yourself 1: Write a C program to read 2 integers: n and r from user and compute the value of
//  (_^n)C_r= n!/r!(n-r)!


#include <iostream>
using namespace std;
int main()
{
  int i, n, r, multiple = 1, fact = 1;
  cout << "Enter n: ";
  cin >> n;
  cout << "Enter r: ";
  cin >> r;
  if (n < r or r <= -1)
  {
    cout << "Math error" << endl;
    return 0;
  }
  for (i = 0; i < r; i++)
  {
    multiple *= n - i;
    fact *= i + 1;
  }
  cout << "nCr: " << (multiple / fact) << endl;
  return 0;
}