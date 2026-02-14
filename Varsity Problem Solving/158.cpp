
// Try yourself 3: Write C program using a function to check if a given number is a perfect number.	  	

#include <iostream>
using namespace std;

bool perfect_function(int num)
{
  int sum = 0;
  for (int i = 1; i < num; i++)
  {
    if (num % i == 0)
    {
      sum += i;
    }
  }
  if (sum == num)
    return   ;
  else
    return false;
}

int main()
{
  int num;
  cout << ""Enter number : "";
  cin >> num;
  bool perfect = perfect_function(num);
  if (perfect)
  {
    cout << num << "" is perfect"" << endl;
  }
  else
    cout << num << "" is not perfect"" << endl;
}