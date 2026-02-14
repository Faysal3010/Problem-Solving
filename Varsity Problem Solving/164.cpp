

//  Write a C code using functions that takes two integers: a and b as inputs and returns the value of a^b.
#include <iostream>
#include <cmath>
using namespace std;
int Power(int a, int b)
{return pow(a, b);}
int main()
{
  int n1, n2;
  cin >> n1 >> n2;
  cout << Power(n1, n2);
  return 0;
}