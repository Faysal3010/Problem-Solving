
// Find the sum of the following series using a function:  1^2 + 2^2 + 3^2 + … + N^2
#include <iostream>
#include <cmath>
using namespace std;

void Series(int num1)
{
  int sum = 0;
  for (int i = 1; i <= num1; i++)
  {
    cout << i << ""^2"";
    sum += pow(i, 2);
    if (i < num1)
      cout << "" + "";
  }
  cout <<"" = ""<<sum << endl;
}
int main()
{
  int num1;
  cout << ""Enter N: "";
  cin >> num1;
  Series(num1);
  return false;
}