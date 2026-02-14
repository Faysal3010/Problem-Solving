	
// Try yourself2: Write C program using a function to check if a given number is positive, negative, or zero.
#include <iostream>
using namespace std;

void Positive_Negative_Zero(int num)
{
  if (num == 0)
    cout << num << "" is Zero "" << endl;
  else if (num > 0)
    cout << num << "" is Positive "" << endl;
  else
    cout << num << "" is Negative "" << endl;
}

int main()
{
  cout << ""Enter number : "";
  int num;
  cin >> num;
  Positive_Negative_Zero(num);
  return 0;
}