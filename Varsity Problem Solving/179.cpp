
// Write a C program to compute sum of digits of a given number using recursion.
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