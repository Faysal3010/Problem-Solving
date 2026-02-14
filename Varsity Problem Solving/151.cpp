
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
