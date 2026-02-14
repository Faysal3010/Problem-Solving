
// C program to compute sum of all natural numbers between m and n (using function)
#include <iostream>
using namespace std;

int naturalNumber(int num1, int num2)
{
  int sum = 0;
  int MAX = max(num1, num2);
  int MIN = min(num1, num2);
  for (MIN; MIN <= MAX; MIN++)
  {
    sum += MIN;
  }
  cout <<""All natural numbers between m and n: "";
  return sum;
}

int main()
{
  int m, n;
  cout << ""Enter m: "";
  cin >> m;
  cout << ""Enter n: "";
  cin >> n;
  cout << naturalNumber(m, n);
}