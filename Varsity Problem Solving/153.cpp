
//Write a C program to print the first n palindrome numbers where n is an input.
#include <iostream>
using namespace std;
int main()
{
  int n, reverse, last_number;
  cout << ""Enter n: "";
  cin >> n;
  cout << ""The first "" << n << "" palindrome numbers: "";
  for (int i = 0; i <= n; i++)
  {
    reverse = 0;
   int x = i;
    while (x != 0)
    {
      last_number = x % 10;
      reverse = reverse * 10 + last_number;
      x /= 10;
    }
    if (reverse == i)
    {
      cout << reverse << "" "";
    }
  }
  return 0;
}