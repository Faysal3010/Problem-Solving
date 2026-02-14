// Write a C program to read any integer from user and compute the reverse of given number. 
// Also output whether the reverse number is prime or not. Sample Input/Output: 
// Enter any integer: 4521
// Reverse number is: 1254. It is not a prime number.



#include <iostream>
using namespace std;
int main()
{
  int n, i, reverse=0;
  cout << "Enter any number: ";
  cin >> n;
  if (n <= 1)
  {
    cout << "It is not a prime number";
    return 0;
  }
  while (n != 0)
  {
    int lastDigit = n % 10;
    reverse = reverse * 10 + lastDigit;
    n = n / 10;
  }
  cout << "Reversed integer: " << reverse;
  for (i = 2; i <= reverse / 2; i++)
  {
    if (reverse % i == 0)
    {
      cout << " .It is not a prime number";
      return 0;
    }
  }
  cout << " .It is a prime number";
  return 0;
}