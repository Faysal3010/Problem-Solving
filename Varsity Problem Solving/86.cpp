// Write a C program to enter any number from user and find the reverse of a given number using loop.Sample input/output (bold ones are user inputs):Enter a number: 2345 Reverse of 2345 is: 5432

#include <iostream>
using namespace std;
int main()
{
  int n, last_number = 0, sign = 1, reverse = 0;
  cout << "Enter number: ";
  cin >> n;
  while (n != 0)
  {
    last_number = n % 10;
    reverse = reverse * 10 + last_number;
    n /= 10;
  }
  cout <<"Reverse: "<< reverse;
  return 0;
}