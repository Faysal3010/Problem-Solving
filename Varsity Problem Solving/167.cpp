
// Write a C program using function that reads a floating point number n and an integer d and then prints the rounded value of n up to d decimal places. E.g. for n=5.678 and d = 2; it should print 5.68

#include <iostream>
#include <cmath>
using namespace std;
float round(float n, int d)
{
  float result = floor(n * pow(10, d) + 0.5) / pow(10, d);
  return result;
}
int main()
{
  int d;
  float n;
  cout << ""Enter floating point number: "";
  cin >> n;
  cout << ""Enter integer: "";
  cin >> d;
  cout << ""Result: "" << round(n, d) << endl;
  return 0;
}
