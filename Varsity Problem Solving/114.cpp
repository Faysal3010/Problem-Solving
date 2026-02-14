"Enter number of rows: 8
Enter number of colums: 4
----
|  |
|  |
|  |
|  |
|  |
|  |
----
"
#include <iostream>
using namespace std;
int main()
{
    int n,m;
    cout << ""Enter number of rows: "";
    cin >> n;
    cout << ""Enter number of colums: "";
    cin >> m;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (i == 1 or i == n)
            {
                cout << ""-"";
            }
            else if (j == 1 or j == m)
            {cout<<""|"";
            }
            else
            {
                cout << "" "";
            }
        }
        cout << endl;
    }
    return 0;
}

-------------------------------------------------
#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cout << ""Enter number of rows: "";
    cin >> n;
    cout << ""Enter number of colums: "";
    cin >> m;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (i == 1 or i == n or j == 1 or j == m)
            {
                cout << ""69"";
            }
            else
            {
                cout << ""  "";
            }
        }
        cout << endl;
    }
    return 0;
}































"   A
   B B
  C C C
 D D D D
E E E E E
"	  	
"//     A
//    B B
//   C C C
//  D D D D
// E E E E E
"

#include <iostream>
using namespace std;
int main()
{
    int n, i, j;
    cout << ""Enter number of rows: "";
    cin >> n;
    int space = n - 1;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= space; j++)
        {
            cout << "" "";
        }
        {
            for (j = 1; j <= i; j++)
            {
                cout << (char)(64 + i) << "" "";
            }
            cout << endl;
            space--;
        }
    }
    return 0;
}

"1
23
456
7890
12345
"	  	

#include <iostream>
using namespace std;
int main()
{
    int n , i, j, number = 1;
    cout << ""Enter number of rows: "";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        for (j = 0; j < i; j++)
        {
            cout << number;
            number = (number + 1) % 10;
        }
        cout << endl;
    }
    return 0;
}
"   1
   234
  56789
 0123456
789012345
"	  	

#include <iostream>
using namespace std;
int main()
{
    int n, i, j, space, number = 1;
    cout << ""Enter n: "";
    cin >> n;
    space = n - 1;
    for (i = 1; i <= n; i += 2)
    {
        for (j = 1; j <= space; j++)
        {
            cout << "" "";
        }
        for (j = 1; j <= i; j++)
        {
            cout << number;
            number = (number + 1) % 10;
        }
        space--;
        cout << endl;
    }
    return 0;
}

--------------------------------------------------
//     1
//    234
//   56789
//  0123456
// 789012345

#include <iostream>
using namespace std;
int main()
{
    int n=7, i, j, space, number = 1;
    cout << ""Enter rows: "";
    cin >> n;
    space = n - 1;
    for (i = 1; i <= n; i ++)
    {
        for (j = 1; j <= space; j++)
        {
            cout << "" "";
        }
        for (j = 1; j <= 2*i-1; j++)
        {
            cout << number;
            number = (number + 1) % 10;
        }
        space--;
        cout << endl;
    }
    return 0;
}


//      0
//     01
//    010
//   0101
//  01010

#include <iostream>
using namespace std;
int main()
{
    int n = 7, i, j;
    // cout << ""Enter number of rows: "";
    // cin >> n;
    int space = n - 1;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= space; j++)
        {
            cout << "" "";
        }
        {
            for (j = 1; j <= i; j++)
            {
                if (j % 2 == 0)
                    cout << ""1"";
                else
                {
                    cout << ""0"";
                }
            }
            cout << endl;
            space--;
        }
    }
    return 0;
}
"*********
 *******
  *****
   ***
    *"	  	
    
"12345678901
 234567890
  1234567
   89012
    345
     6

     "


#include <iostream>
using namespace std;
int main()
{
    int n = 7, i, j, number = 1;
    // cout << ""Enter rows: "";
    // cin >> n;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j < i; j++)
        {
            cout << "" "";
        }
        for (j = 1; j <2*(n-i); j++)
        {
            cout << number;
            number = (number + 1) % 10;
        }
        cout << endl;
    }
    return 0;
}
-----------------------------------------------
// Enter rows: 5
// *********
// -*******
// --*****
// ---***
// ----*

#include <iostream>
using namespace std;
int main()
{
    int n , i, j, number = 1;
    cout << ""Enter rows: "";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j < i; j++)
        {
            cout << ""-"";
        }
        for (j = 1; j <=2*(n-i)+1; j++)
        {
            cout << '*';
        //    number = (number + 1) % 10;
        }
        cout << endl;
    }
    return 0;
}

"             +
           ++
         +++
       ++++
     +++++
   ++++++
 +++++++
   ++++++
     +++++
       ++++
         +++
           ++ 
             +   "	  	
             
#include <iostream>
using namespace std;
int main()
{
    int n = 7, i, j;
    // cout << ""Enter number of rows: "";
    // cin >> n;
    int space = n - 1;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= space; j++)
        {
            cout << "" "";
        }
        {
            for (j = 1; j <= i; j++)
            {
                cout << ""+"";
            }
            cout << endl;
            space--;
        }
    }
    for (i = 1; i <= n; i++)
    {

        for (j = 1; j <= i; j++)
        {
            cout << "" "";
        }
        for (j = 1; j <= n - i; j++)
        {
            cout << ""+"";
        }
        cout << endl;
    }
    return 0;
}


"
// *
// **
// ***
// ****
// *****
// ****
// ***
// **
// *
"

#include <iostream>
using namespace std;
int main()
{
    int n, i, j;
    cout << ""Enter number of rows: "";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << ""+"";
        }
        cout << endl;
    }
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n - i; j++)
        {
            cout << ""+"";
        }
        cout << endl;
    }
    return 0;
}
"    * 
    *** 
  *****
 *******
*********
 *******
  *****
   ***
    *
    "	  	

#include <iostream>
using namespace std;
int main()
{
    int n = 7, i, j;
    // cout << ""Enter number of rows: "";
    // cin >> n;
    int space = n - 1;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= space; j++)
        {
            cout << "" "";
        }
        {
            for (j = 1; j <= i; j++)
            {
                cout << ""+ "";
            }
            cout << endl;
            space--;
        }
    }
    for (i = 1; i <= n; i++)
    {

        for (j = 1; j <= i; j++)
        {
            cout << "" "";
        }
        for (j = 1; j <= n - i; j++)
        {
            cout << ""+ "";
        }
        cout << endl;
    }
    return 0;
}

// C program to print all perfect numbers between 1 to n:	  	

#include <iostream>
using namespace std;
int main()
{
  int i, n, j, sum;
  cout << ""Enter 1 to n: "";
  cin >> n;
  for (i = 1; i <= n; i++)
  {
    sum = 0;
    for (j = 1; j < i; j++)
    {
      if (i % j == 0)
      {
        sum += j;
      }
    }
    if (sum == i)
    {
      cout << i << "" "";
    }
  }
  return 0;
}


// C program to print all prime numbers between 1 and n.	  	

#include <iostream>
using namespace std;
int main()
{
  int i, j, prime, n;
  cout << ""Enter 1 to N: "";
  cin >> n;
  for (i = 2; i <= n; i++)
  {
    prime = 0;
    for (j = 2; j <= i / 2; j++)
    {
      if (i % j == 0)
      {
        prime = 1;
        break;
      }
    }
    if (prime == 0)
    {
      cout << "" "" << i;
    }
  }
  return 0;
}


// Write a program that prints first n prime numbers (n is input). E.g. for n = 5 it should print: 2,3,5,7,11,	  	

#include <iostream>
using namespace std;
int main()
{
  int i, j, prime, n, sum = 0;
  cout << ""Enter N: "";
  cin >> n;
  cout << ""First "" << n << "" prime:  "";
  for (i = 2;; i++)
  {
    prime = 0;
    for (j = 2; j <= i / 2; j++)
    {
      if (i % j == 0)
      {
        prime = 1;
        break;
      }
    }
    if (prime == 0)
    {
      cout << "" "" << i;
      sum = sum + 1;
      if (sum < n)
      {
        cout << "","";
      }
      if (sum == n)
      {
        return 0;
      }
    }
  }
}


// Write a C program to print all prime numbers between 1 and n in reverse order (n is an input). 
// Sample input/output:
// Enter n: 20
// All prime numbers between 1 and 20 (in reverse order):19, 17, 13, 11, 7, 5, 3, 2,


#include <iostream>
using namespace std;
int main()
{
  int n, i, j, prime = 0;
  cout << ""Enter n: "";
  cin >> n;
  cout << "" All prime numbers between 1 and "" << n << "" (in reverse order): "";
  for (i = n; i >= 2; i--)
  {
    prime = 0;
    for (j = 2; j <= i / 2; j++)
    {
      if (i % j == 0)
      {
        prime = 1;
        break;
      }
    }
    if (prime == 0)
    {
      cout << "" "" << i;
      if (2 < i)
      {
        cout << "","";
      }
    }
  }
  return 0;
}


//  Write a C program to compute and print the sum of all prime numbers between m and n (m, n are inputs)
#include <iostream>
using namespace std;
int main()
{
  int m, n, isPrime, sum = 0;
  cout << ""Enter m: "";
  cin >> m;
  cout << ""Enter n: "";
  cin >> n;
  cout << ""All prime numbers between "" << m << "" and "" << n << "" are : "";
  for (m; m <= n; m++)
  {
    isPrime = 0;
    for (int j = 2; j <= m / 2; j++)
    {
      if (m % j == 0)
      {
        isPrime = 1;
        break;
      }
    }
    if (isPrime == 0)
    {
      cout << m << "" "";
      sum = sum + m;
    }
  }
  cout << endl;
  cout << ""Sum: "" << sum;
  return 0;
}


"Write a C program to print the first n perfect numbers where n is an input."	

#include <iostream>
using namespace std;
int main()
{
  int i, j, n, sum = 0, count = 0;
  cout << ""Enter n: "";
  cin >> n;
  cout << ""First "" << n << "" number: "";
  for (i = 1;; i++)
  {
    sum = 0;
    for (j = 1; j < i; j++)
    {
      if (i % j == 0)
      {
        sum += j;
      }
    }
    if (sum == i)
    {
      cout << i << "" "";
      count++;
      if (count == n)
      {
        return 0;
      }
    }
  }
  return 0;
}

----------------------------------------------------------
//super fast 

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
  int count = 0, i = 2, j, sum, n, isPrime;
  cout << ""Enter n: "";
  cin >> n;
  cout << ""First "" << n << "" number: "";
  while (count <= n)
  {
    isPrime = 0;
    for (j = 2; j <= i / 2; j++)
    {
      if (i % j == 0)
      {
        isPrime = 1;
        break;
      }
    }
    if (isPrime == 0)
    {
      double x = (pow(2, i - 1)) * (pow(2, i) - 1);
      cout << "" "" << x;
      count++;
      if (count == n)
      {
        return 0;
      }
    }
    i++;
  }
}


// Write a C program to compute and print the sum of first n perfect numbers.	  	

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
  int count = 0, i = 2, j, sum = 0, n, isPrime;
  cout << ""Enter n: "";
  cin >> n;
  cout << ""First "" << n << "" number: "";
  while (count <= n)
  {
    isPrime = 0;
    for (j = 2; j <= i / 2; j++)
    {
      if (i % j == 0)
      {
        isPrime = 1;
        break;
      }
    }
    if (isPrime == 0)
    {
      double x = (pow(2, i - 1)) * (pow(2, i) - 1);
      cout << "" "" << x;
      sum += x;
      count++;
      if (count == n)
      {
        cout << endl;
        cout << ""Sum: "" << sum << endl;
        return 0;
      }
    }
    i++;
  }
}


//Write a C program to print the n-th perfect number where n is an input.

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
  int count = 0, i = 2, j, n, isPrime;
  cout << ""Enter n: "";
  cin >> n;
  cout << n << ""-th perfect number: "";
  while (count <= n)
  {
    isPrime = 0;
    for (j = 2; j < i ; j++)
    {
      if (i % j == 0)
      {
        isPrime = 1;
        break;
      }
    }
    if (isPrime == 0)
    {
      double x = (pow(2, i - 1)) * (pow(2, i) - 1);
      count++;
      if (count == n)
      {
        cout << x;
        return 0;
      }
    }
    i++;
  }
}

"Write a C program to print all palindrome numbers between m and n 
(m,  n are inputs). For e.g. 121 is a palindrome since the reverse of 121 = 121; but 152 is not a palindrome."

using namespace std;
int main()
{
  int n, m, reverse, last_number;
  cout << ""Enter m: "";
  cin >> m;
  cout << ""Enter n: "";
  cin >> n;
  cout << ""all palindrome numbers between "" << m << "" and "" << n << "" : "";
  while (n < m)
  {
    reverse = 0;
    int x = n;
    while (x != 0)
    {
      last_number = x % 10;
      reverse = reverse * 10 + last_number;
      x = x / 10;
    }
    if (reverse == n)
    {
      cout << "" "" << reverse;
    }
    n++;
  }

  while (n >= m)
  {
    reverse = 0;
    int x = m;
    while (x != 0)
    {
      last_number = x % 10;
      reverse = reverse * 10 + last_number;
      x = x / 10;
    }
    if (reverse == m)
    {
      cout << "" "" << reverse;
    }
    m++;
  }
  return 0;
}


// Write a C program to compute and print the sum of palindrome numbers between m and n
#include <iostream>
using namespace std;
int main()
{
  int n, m, reverse, last_number, sum = 0;
  cout << ""Enter m: "";
  cin >> m;
  cout << ""Enter n: "";
  cin >> n;
  cout << ""all palindrome numbers between "" << m << "" and "" << n << "" : "";
  while (n < m)
  {
    reverse = 0;
    int x = n;
    while (x != 0)
    {
      last_number = x % 10;
      reverse = reverse * 10 + last_number;
      x = x / 10;
    }
    if (reverse == n)
    {
      cout << "" "" << reverse;
      sum += reverse;
    }
    n++;
  }

  while (n >= m)
  {
    reverse = 0;
    int x = m;
    while (x != 0)
    {
      last_number = x % 10;
      reverse = reverse * 10 + last_number;
      x = x / 10;
    }
    if (reverse == m)
    {
      cout << "" "" << reverse;
      sum += reverse;
    }
    m++;
  }
  cout << endl;
  cout << ""sum = "" << sum << endl;
  return 0;
}


//Write a C program to print the first n palindrome numbers where n is an input.
#include <iostream>
using namespace std;
int main()
{
  int n, reverse, last_number;
  cout << ""Enter n: "";
  cin >> n;
  cout << ""The first "" << n << "" palindrome numbers: "";
  for (int i = 0; i <= n; i++)
  {
    reverse = 0;
   int x = i;
    while (x != 0)
    {
      last_number = x % 10;
      reverse = reverse * 10 + last_number;
      x /= 10;
    }
    if (reverse == i)
    {
      cout << reverse << "" "";
    }
  }
  return 0;
}


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


// 4.        C program to compute sum of all natural numbers between m and n (using function)
#include <iostream>
using namespace std;

int naturalNumber(int num1, int num2)
{
  int sum = 0;
  int MAX = max(num1, num2);
  int MIN = min(num1, num2);
  for (MIN; MIN <= MAX; MIN++)
  {
    sum += MIN;
  }
  cout <<""All natural numbers between m and n: "";
  return sum;
}

int main()
{
  int m, n;
  cout << ""Enter m: "";
  cin >> m;
  cout << ""Enter n: "";
  cin >> n;
  cout << naturalNumber(m, n);
}


// 5. C program to compute the integer resulting from rounding a number n (using function)
#include <iostream>
using namespace std;

int round(float num1)
{
  int i = num1;
  if (num1 - i >= 0.5)return (i + 1);
  else return  i;
}

int main()
{
  float x;
  cout << ""Enter floating point number: "";
  cin >> x;
  cout << round(x) << endl;
  return 0;
}


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


// 2.Find the sum of the following series using a function:  1^2 + 2^2 + 3^2 + … + N^2
#include <iostream>
#include <cmath>
using namespace std;

void Series(int num1)
{
  int sum = 0;
  for (int i = 1; i <= num1; i++)
  {
    cout << i << ""^2"";
    sum += pow(i, 2);
    if (i < num1)
      cout << "" + "";
  }
  cout <<"" = ""<<sum << endl;
}
int main()
{
  int num1;
  cout << ""Enter N: "";
  cin >> num1;
  Series(num1);
  return false;
}


// 1. Find the sum of the following series using user-defined function:  1/1! + 2/2! + 3/3! + …… +1/N!
#include <iostream>
// #include <cmath>
using namespace std;

void Series(int num1)
{
  float sum = 0, factorial = 1;
  for (int i = 1; i <= num1; i++)
  {
    cout << i << ""/"" << i << ""!"";
    factorial *= i;
    sum += i / factorial;
    if (i < num1)
      cout << "" + "";
  }
  cout << "" = "" << sum;
}
int main()
{
  int num1;
  cout << ""Enter N: "";
  cin >> num1;
  Series(num1);
  return false;
}


// 2.        Write a C code using functions that takes two integers: a and b as inputs and returns the value of a^b.
#include <iostream>
#include <cmath>
using namespace std;
int Power(int a, int b)
{return pow(a, b);}
int main()
{
  int n1, n2;
  cin >> n1 >> n2;
  cout << Power(n1, n2);
  return 0;
}




// Compute the sum of the following geometric progression using a function with 2 parameters r and n:
// r^0(1) + r^1 + r^2 + … + r^n (read the values of r and n from user)

#include <iostream>
#include <cmath>
using namespace std;
void series(int a, int b)
{
  int sum = 0;
  for (int i = 0; i <= b; i++)
  {
    cout << a << ""^"" << i;
    sum += pow(a, i);
    if (i < b)
      cout << "" + "";
  }
  cout << "" = "" << sum;
}
int main()
{
  int n1, n2;
  cout << ""Enter r,n: "";
  cin >> n1>> n2;
  series(n1, n2);
  return 0;
}


// 3.        Compute the sum of the following geometric progression using a function with 2 parameters r and n:
// r^0(1) + r^1 + r^2 + … + r^n (read the values of r and n from user)

#include <iostream>
// #include <cmath>
using namespace std;
void reverse(int a)
{
  cout<<""reverse: "";
  while (a != 0)
  {
    int lastNumber = a % 10;
    cout << lastNumber;
    a /= 10;
  }
}
int main()
{
  int n1;
  cout << ""Enter int: "";
  cin >> n1;
  reverse(n1);
  return 0;
}


// 5.        Write a C program using function that reads a floating point number n and an integer d and then prints the rounded value of n up to d decimal places. E.g. for n=5.678 and d = 2; it should print 5.68

#include <iostream>
#include <cmath>
using namespace std;
float round(float n, int d)
{
  float result = floor(n * pow(10, d) + 0.5) / pow(10, d);
  return result;
}
int main()
{
  int d;
  float n;
  cout << ""Enter floating point number: "";
  cin >> n;
  cout << ""Enter integer: "";
  cin >> d;
  cout << ""Result: "" << round(n, d) << endl;
  return 0;
}


"
C program of a recursive function to find the sum of n natural numbers. For example: the number 5 will give an output of 15 since 5+4+3+2+1 = 15.	  	
"
#include <iostream>
#include <cmath>
using namespace std;

int natual(int n)
{
  if (n == 0)
    return 0;
  else
  {
    cout << n << endl;
    return (n + natual(n - 1));
  }
}
int main()
{
  int n;
  cout << ""Enter n: "";
  cin >> n;
  cout << natual(n);
  return 0;
}


// Code that computes the factorial of a number using recursive function.

#include <iostream>
#include <cmath>
using namespace std;

int factorial(int n)
{
  if (n == 1)
    return 1;
  else
    return n * factorial(n - 1);
}
int main()
{
  int n;
  cout << ""Enter n: "";
  cin >> n;
  cout << factorial(n);
  return 0;
}


// Code that computes the n-th Fibonacci number using recursive function.
// 0 1 1 2 3 5 8 13
#include <iostream>
#include <cmath>
using namespace std;

int Fibonacci(int n)
{
  if (n == 1)
    return 0;
  else if (n == 2)
    return 1;
  else
    return Fibonacci(n - 1) + Fibonacci(n - 2);
}
int main()
{
  int n;
  cout << ""Enter n: "";
  cin >> n;
  cout << Fibonacci(n);
  return 0;
}


// C program to print all natural numbers from 1 to n using recursion.
#include <iostream>
#include <cmath>
using namespace std;
void naturalNumber(int lower, int upper)
{
  if(lower>upper)return;
  cout<<lower<<"" "";
  naturalNumber(lower+1, upper);
}
int main()
{
  int n;
  cout << ""Enter n: "";
  cin >> n;
  naturalNumber(1, n);
  return 0;
}



//    Write a C code to find the sum of the following series using RECURSIVE FUNCTIONS:
//  1^2 + 2^2 + 3^2 + … + N^2

#include <iostream>
#include <cmath>
using namespace std;
int sum = 0;
void naturalNumber(int lower, int upper)
{
  if (lower > upper)
  {
    cout << "" = "" << sum;
    return;
  }
  sum += pow(lower, 2);
  cout << pow(lower, 2);
  if (lower < upper)
  {
    cout << "" + "";
  }
  naturalNumber(lower + 1, upper);
}
int main()
{
  int n;
  cout << ""Enter n: "";
  cin >> n;
  naturalNumber(1, n);
  return 0;
}



//Write a C program using recursive function to find the inverse product of 1st n natural numbers. E.g. for n= 5, the function should return (1/5) * (1/4) *(1/3) * (1/2) *(1/1) = 1/120 =0.00833
#include <iostream>
#include <cmath>
using namespace std;
float sum = 1;
void naturalNumber(float upper, float lower)
{
  if (lower > upper)
  {
    cout << "" = "" << sum;
    return;
  }
  sum *= 1 / upper;
  cout << ""1/"" << upper;
  if (lower < upper)
  {
    cout << "" * "";
  }
  naturalNumber(upper - 1, lower);
}
int main()
{
  int n;
  cout << ""Enter n: "";
  cin >> n;
  naturalNumber(n, 1);
  return 0;
}


//Compute the value of a^b using recursion, where a and b are integers.
#include <iostream>
#include <cmath>
using namespace std;

int ab(int a, int b)
{
  if (b == 0)
    return 1;
  return a * ab(a, b - 1);
}
int main()
{
  int a, b;
  cout << ""Enter a^b: "";
  cin >> a >> b;
  cout << a << ""^"" << b << "" = "" << ab(a, b);
  return 0;
}



// Write a C program to print all natural numbers from n to 1 (i.e., from upper to lower) using recursion.
#include <iostream>
#include <cmath>
using namespace std;

void n_To_1(int upper, int lower)
{
  if (lower > upper)
  {
    return;
  }
  cout << upper << "" "";
  n_To_1(upper - 1, lower);
}
int main()
{
  int n;
  cout << ""Enter n: "";
  cin >> n;
  n_To_1(n, 1);
  return 0;
}



// Compute the sum of the following geometric progression without recursion:
// 1 + r + r^2 + … + r^n (read the values of r and n from user)

#include <iostream>
#include <cmath>
using namespace std;

int r_n(int n, int r)
{
  return ((1 - pow(r, n + 1)) / (1 - r));
}
int main()
{
  int n, r;
  cout << ""Enter r: "";
  cin >> r;
  cout << ""Enter n: "";
  cin >> n;
  cout << r_n(n, r);
  return 0;
}
"
2.        Compute the sum of the above geometric progression using recursion.	  	"// 2. Compute the sum of the above geometric progression using recursion.
#include <iostream>
#include <cmath>
using namespace std;
double series(int r, int n)
{
  if (n == 0)
  {
    return 1;
  }
  return pow(r, n) + series(r, n - 1);
}
int main()
{
  int n, r;
  cout << ""Enter r: "";
  cin >> r;
  cout << ""Enter n: "";
  cin >> n;
  cout << ""Sum = "" << series(r, n);
  return 0;
}
"3.        Write a C code to find the sum of the following series using recursion:
1/1! + 2/2! + 3/3! + ……1/N!
"	  	"// 3.        Write a C code to find the sum of the following series using recursion:
// 1/1! + 2/2! + 3/3! + ……1/N!
#include <iostream>
using namespace std;
int factorials(int n)
{
  if (n == 0 or n == 1)
    return 1;
  else
    return n * factorials(n - 1);
}
double seriesSum(int N)
{
  if (N == 0)
    return 0;
  else
    return (double)N / factorials(N) + seriesSum(N - 1);
}

int main()
{
  int n;
  cout << ""\n\nEnter the number of N: "";
  cin >> n;
  cout << ""The sum of the following series: "" << seriesSum(n) << endl<< endl<< endl;
  return 0;
}
"4.        Write a C program to compute sum of digits of a given number using recursion.
Sample input/output:
Enter an integer: 5431
Sum of digits = 13
"	  	"// 4.        Write a C program to compute sum of digits of a given number using recursion.
// Sample input/output:
// Enter an integer: 5431
// Sum of digits = 13

#include <iostream>
using namespace std;

int reverse(int N)
{
  if (N == 0)
    return 0;
  else
  {
    int lastNumber = N % 10;
    return lastNumber + (reverse(N / 10));
  }
}

int main()
{
  int n;
  cout << ""Enter Number: "";
  cin >> n;
  cout << ""Reverse Number: "" << reverse(n) << endl;
  return 0;
}
"5.        Write a C program to print the digits of a given number in words using recursion.
Sample input/output:
Enter an integer: 5431
Number in words: Five Four Three One
"	  	#include <iostream>
using namespace std;

void intoWord(int x)
{
    switch (x)
    {
    case 0:
        cout << ""Zero "";
        break;
    case 1:
        cout << ""One "";
        break;
    case 2:
        cout << ""Two "";
        break;
    case 3:
        cout << ""Three "";
        break;
    case 4:
        cout << ""Four "";
        break;
    case 5:
        cout << ""Five "";
        break;
    case 6:
        cout << ""Six "";
        break;
    case 7:
        cout << ""Seven "";
        break;
    case 8:
        cout << ""Eight "";
        break;
    case 9:
        cout << ""Nine "";
        break;
    }
}

int inWord(int N)
{
    if (N == 0)
    {
        return (0);
    }

    inWord(N / 10);
    intoWord(N % 10);
}

int main()
{
    int n;
    cout << ""Enter the number: "";
   cin >> n;
    if (n < 0)
    {
        cout << ""Enter a positive number !!"";
    }
    else if (n == 0)
    {
        cout << ""Number in words: Zero"";
    }
    else
    {
        cout << ""Number in words: "";
        inWord(n);
    }
    return 0;
}




#include <iostream>
using namespace std;

void intoWord(int x)
{
  switch (x)
  {
  case 0:
    cout << ""Zero "";
    break;
  case 1:
    cout << ""One"";
    break;
  case 2:
    cout << ""Two"";
    break;
  case 3:
    cout << ""Three"";
    break;
  case 4:
    cout << ""Four"";
    break;
  case 5:
    cout << ""Five"";
    break;
  case 6:
    cout << ""Six"";
    break;
  case 7:
    cout << ""Seven"";
    break;
  case 8:
    cout << ""Eight"";
    break;
  case 9:
    cout << ""Nine"";
    break;
  }
}

void inWord(int N)
{
  if (N == 0)
  {
   return;
  }
  else
  {
    inWord(N / 10);
    cout<<N;
    intoWord(N % 10);
    cout<<N;
    cout<<"" "";
  }
}

int main()
{
  int n=123;
  cout << ""Enter the number: "";
 // cin >> n;
  if (n < 0)
  {
    cout << ""Enter a positive number !!"";
  }
  else if (n == 0)
  {
    cout << ""Number in words: Zero"";
  }
  else
  {
    cout << ""Number in words: "";
    inWord(n);
  }
  return 0;
}
	  	#include <iostream>
using namespace std;

int main()
{
  int n = 10;
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= n; j++)
    {
      if (
        i == 1 and (j==5 or j==6 ) 
      or i==2 and (j==3 or j==8) 
      or i==3 and (j==2 or j==9) 
      or i==4 and (j==1 or j==10)
      or i==5 and (j==1 or j==10)
      or i==6 and (j==1 or j==10)
      or i==7 and (j==1 or j==10)
      or i==8 and (j==2 or j==9)
      or i==9 and (j==3 or j==8)
      or i==10 and (j==5 or j==6) )
        cout << "" 0"";
      else
      {
        cout << ""  "";
      }
    }
    cout << endl;
  }
  return 0;
}
ATM	  	#include <iostream>
using namespace std;

void showMenu()
{
  cout << ""*****Menu******"" << endl;
  cout << ""1. Check balance"" << endl;
  cout << ""2. Deposit money"" << endl;
  cout << ""3. withdraw money"" << endl;
  cout << ""4. Exit"" << endl;
  cout << ""***************"" << endl;
}

int main()
{
  int option;
  double balance = 0;
  do
  {
    showMenu();
    cout << ""Options: "";
    cin >> option;
    system(""cls"");
    switch (option)
    {
    case 1:
      cout << ""Balance: $"" << balance << endl;
      break;
    case 2:
      cout << ""Deposit amount: $"";
      double DepositAmount;
      cin >> DepositAmount;
      balance += DepositAmount;
      break;
    case 3:
      cout << ""Withdraw amount: $"";
      double WithdrawAmount;
      cin >> WithdrawAmount;
      if (WithdrawAmount <= balance)
      {
        balance -= WithdrawAmount;
      }
      else
      {
        cout << ""Not enough money"" << endl;
      }
      break;
    }
  } while (option != 4);
  return 0;
}



//make a recursion n to m of sum

#include <iostream>
using namespace std;

int sum(int n, int m)
{
    if (n == m)
        return m+1;
    return n + sum(n + 1, m);
}

int main()
{
    int n, m;
    cin >> n >> m;
    cout << sum(n, m) << endl;
    return 0;
}