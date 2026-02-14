
// Write a C program to compute and print the sum of palindrome numbers between m and n
#include <iostream>
using namespace std;
int main()
{
  int n, m, reverse, last_number, sum = 0;
  cout << ""Enter m: "";
  cin >> m;
  cout << ""Enter n: "";
  cin >> n;
  cout << ""all palindrome numbers between "" << m << "" and "" << n << "" : "";
  while (n < m)
  {
    reverse = 0;
    int x = n;
    while (x != 0)
    {
      last_number = x % 10;
      reverse = reverse * 10 + last_number;
      x = x / 10;
    }
    if (reverse == n)
    {
      cout << "" "" << reverse;
      sum += reverse;
    }
    n++;
  }

  while (n >= m)
  {
    reverse = 0;
    int x = m;
    while (x != 0)
    {
      last_number = x % 10;
      reverse = reverse * 10 + last_number;
      x = x / 10;
    }
    if (reverse == m)
    {
      cout << "" "" << reverse;
      sum += reverse;
    }
    m++;
  }
  cout << endl;
  cout << ""sum = "" << sum << endl;
  return 0;
}