
// C program to determine if a given number is prime using function	  	

#include <iostream>
using namespace std;

bool prime_function(int num)
{
  bool prime =   ;
  for (int i = 2; i < num; i++)
  {
    if (num % i == 0)
    {
      return false;
    }
  }
  return prime;
}

int main()
{
  int num;
  cout << ""Enter number : "";
  cin >> num;
  bool prime = prime_function(num);
  if (prime)
  {
    cout << num << "" is prime"" << endl;
  }
  else
    cout << num << "" is not prime"" << endl;
}