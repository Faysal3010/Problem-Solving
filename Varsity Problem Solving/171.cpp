
// C program to print all natural numbers from 1 to n using recursion.
#include <iostream>
#include <cmath>
using namespace std;
void naturalNumber(int lower, int upper)
{
  if(lower>upper)return;
  cout<<lower<<"" "";
  naturalNumber(lower+1, upper);
}
int main()
{
  int n;
  cout << ""Enter n: "";
  cin >> n;
  naturalNumber(1, n);
  return 0;
}