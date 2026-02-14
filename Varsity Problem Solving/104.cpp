//    Write a C program to display a given number in words starting from its leftmost digit.
//  Hint: Compute the reverse of the given number and then use a while loop like practice 3 to print the digits. E.g., if input number is 1234 your program should print “One Two Three Four”.

#include <iostream>
using namespace std;

int reverse(int a)
{
    int reverse1 = 0;
    while (a != 0)
    {
        int last_number = a % 10;
        reverse1 = reverse1 * 10 + last_number;
        a = a / 10;
    }
    return reverse1;
}
int main()
{
    int n;
    cout << "Enter number: ";
    cin >> n;
    if (cin.fail())
    {
        cout << "invalid";
    }
    else if(n == 0)cout << "zero" << endl;

    int m = reverse(n);

    while (m != 0)
    {
        switch (m % 10)
        {
        case 0:
            cout << "zero ";
            break;
        case 1:
            cout << "one ";
            break;
        case 2:
            cout << "two ";
            break;
        case 3:
            cout << "three ";
            break;
        case 4:
            cout << "four ";
            break;
        case 5:
            cout << "five ";
            break;
        case 6:
            cout << "six ";
            break;
        case 7:
            cout << "seven ";
            break;
        case 8:
            cout << "eight ";
            break;
        case 9:
            cout << "nine ";
            break;
        }
        m /= 10;
    }
    return 0;
}