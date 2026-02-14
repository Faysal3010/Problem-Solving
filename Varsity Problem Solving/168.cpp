
"
C program of a recursive function to find the sum of n natural numbers. For example: the number 5 will give an output of 15 since 5+4+3+2+1 = 15.	  	
"
#include <iostream>
#include <cmath>
using namespace std;

int natual(int n)
{
  if (n == 0)
    return 0;
  else
  {
    cout << n << endl;
    return (n + natual(n - 1));
  }
}
int main()
{
  int n;
  cout << ""Enter n: "";
  cin >> n;
  cout << natual(n);
  return 0;
}