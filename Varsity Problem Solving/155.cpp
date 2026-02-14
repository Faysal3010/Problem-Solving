
//   C program to determine if a given number is odd/even using function
#include <iostream>
using namespace std;

int Odd_Even(int num)
{
  if (num % 2 == 0)
    cout << num << "" is even "" << endl;
  else
    cout << num << "" is odd "" << endl;
  return num;
}

int main()
{
  cout << ""Enter number : "";
  int num;
  cin >> num;
  Odd_Even(num);
  return 0;
}