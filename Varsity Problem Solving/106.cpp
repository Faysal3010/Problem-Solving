//   Write a C program to convert a given decimal number to its binary equivalent.

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter Binary number: ";
    cin >> n;
    while (n != 0)
    {
        if(n%2!=0)cout << 1;
        else cout <<0;
        n/=2;
    }
   // cout << "Decimal: " << dec << endl;
    return 0;
}
>>>>>reverse binary
______________________________

#include <iostream>
using namespace std;
int main()
{
    int n, last_number, binary_number = 0, mul = 1;
    cout << "Enter Binary number: ";
    cin >> n;
    while (n != 0)
    {
        last_number = n % 2;
        binary_number = binary_number + (last_number * mul);
        cout<<binary_number<<endl;
        n /= 2;
        mul *= 10;
    }
    cout << "Decimal: " << binary_number << endl;
    return 0;
}