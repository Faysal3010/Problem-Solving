
// Write a C program using 3 functions to compute diameter, circumference and area of a circle whose radius is given by the user as the input.
#include <iostream>
//#include <cmath>
using namespace std;

float diameter(float num1);
float circumference(float num1);
float Area(float num1);
int main()
{
  float num1;
  cout<<""Enter radius: "";
  cin >> num1;
  cout<<""Diameter: ""<< diameter(num1)<<endl;
  cout<<""Circumference: ""<< circumference(num1)<<endl;
  cout<<""Area: ""<< Area(num1)<<endl;
  return false;
}
float diameter(float num1)
{
  return num1*2;
}
float circumference(float num1)
{
  return 2*3.1416*num1;
}
float Area(float num1)
{
  return 3.1416*num1*num1;
}
