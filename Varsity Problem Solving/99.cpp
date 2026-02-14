// 2.Write a C program to convert a given Binary number to its Decimal equivalent.

#include <iostream>
using namespace std;
int main()
{
    int n, last_number, mult = 1, sum = 0;
    cout << "Enter Binary number: ";
    cin >> n;
    while (n != 0)
    {
        last_number = n % 10;
        mult *= 2;//2,4,8,16,32,64,128..............
        int dec = mult * last_number;//2x(binary last_number serial way)
        sum += dec;
        n /= 10;
    }
    cout << "Decimal: " << sum/2 << endl;
    return 0;
}
--------------------------------------------------------------------------------------------------------------
#include <iostream>
using namespace std;
int main()
{
    int n, last_number, mult = 1, dec = 0;
    cout << "Enter Binary number: ";
    cin >> n;
    while (n != 0)
    {
        last_number = n % 10;
        dec = dec + (mult * last_number);
        n /= 10;
        mult *= 2;
    }
    cout << "Decimal: " << dec << endl;
    return 0;
}