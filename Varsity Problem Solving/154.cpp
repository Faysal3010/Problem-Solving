
//  C program illustrating the difference between void and non-void function:
#include <iostream>
using namespace std;

void print(string name, string city, int age)
{
  cout << ""\nFrom void""<<endl;
  cout << ""My name is "" << name << endl;
  cout << ""I am from "" << city << endl;
  if (age != 0)
    cout << ""I am "" << age << "" years old"" << endl;
}
int fx(string name, string city, int age)
{
  cout << ""From int""<<endl;
  cout << ""My name is "" << name << endl;
  cout << ""I am from "" << city << endl;
  if (age != 0)
    cout << ""I am "" << age << "" years old"" << endl;
  return name, city, age;
}

int main()
{
  print(""Faysal"", ""Dhaka"", 23);
  cout<<""-------------------------------""<<endl;
  fx(""Salfay"", ""Kadha"", 32);
  return 0;
}