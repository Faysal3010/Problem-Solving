// Write a C program display a given number in words starting from its rightmost digit 

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter any number: ";
    cin >> n;
    if (cin.fail())
    {
        cout << "Not a number";
        return 0;
    }
    while (n!=0)
    {
        switch (n%10)
        {
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
        case 0:
            cout << "zero ";
            break;
        }
        n/= 10;
    }

    return 0;
}