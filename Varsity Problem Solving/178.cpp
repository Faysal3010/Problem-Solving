
//   Write a C code to find the sum of the following series using recursion:
// 1/1! + 2/2! + 3/3! + ……1/N!
#include <iostream>
using namespace std;
int factorials(int n)
{
  if (n == 0 or n == 1)
    return 1;
  else
    return n * factorials(n - 1);
}
double seriesSum(int N)
{
  if (N == 0)
    return 0;
  else
    return (double)N / factorials(N) + seriesSum(N - 1);
}

int main()
{
  int n;
  cout << ""\n\nEnter the number of N: "";
  cin >> n;
  cout << ""The sum of the following series: "" << seriesSum(n) << endl<< endl<< endl;
  return 0;
}