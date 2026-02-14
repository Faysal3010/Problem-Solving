// Write a C program to read 2 integers: n and r from user and compute the value of (_^n)P_r= n!/(n-r)!

#include <iostream>
using namespace std;
int main()
{
  int i, n, r, multiple = 1;
  cout << "Enter n: ";
  cin >> n;
  cout << "Enter r: ";
  cin >> r;
  if (r <= -1 or n<r)
  {
    cout << "Math Error";
    return false;
  }
  cout << n << "P" << r << "=";
  for (i = 0; i < r; i++)
  {
    multiple *= n - i;
  }
  cout << multiple;
  return 0;
}