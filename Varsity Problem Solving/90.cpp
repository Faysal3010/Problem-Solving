// Write a C program to compute the sum of digits of an input number and check if this sum is a prime or not.
// Sample Input/Output: 
// Enter any integer: 2821
// Sum of its digits = 13. It is a prime number.



#include <iostream>
using namespace std;
int main()
{
  int n, i, sum = 0;
  cout << "Enter any number: ";
  cin >> n;
  if (n <= 1)
  {
    cout << "It is not a prime number";
    return 0;
  }
  while (n > 0)
  {
    int lastDigit = n % 10;
    sum += lastDigit;
    cout << lastDigit;
    if (n >= 10)
      cout << " + ";
    n = n / 10;
  }
  cout << " = " << sum;
  for (i = 2; i <= sum / 2; i++)
  {
    if (sum % i == 0)
    {
      cout << " is not a prime number";
      return 0;
    }
  }
  cout << " .It is a prime number";
  return 0;
}