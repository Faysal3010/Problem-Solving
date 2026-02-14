// Write a C program to read a number from user and check whether given number is a palindrome or not.
// A number is a palindrome if the number is the same as its reverse for e.g. 23432 is a palindrome but 2345 is not.

#include <iostream>
using namespace std;
int main()
{
  int n, reverse = 0;
  cout << "Enter anmer number: ";
  cin >> n;
  int orginal = n;
  while (n != 0)
  {
    int last_number = n % 10;
    reverse = reverse * 10 + last_number;
    n /= 10;
  }
  if (reverse == orginal)
     cout << "reverse and palindrome " << reverse;
  else
    cout << "not palindrome " << reverse;
}