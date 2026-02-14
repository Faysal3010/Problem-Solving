// 6.        Write a C program that asks a shopper to enter amount (in kg) and total price of sugar he bought from different places. If the shopper mistakenly enters a negative number as amount/price, it prints an error message “Invalid input, enter a positive number” and prompts the shopper to give another input. When the shopper enters 0 as an amount then the program terminates and shows the shopper total amount, price and average price of sugar per kg. [Hint: Use continue statement within a loop] Sample input/output:
// Enter amount (in kg): 5
// Enter price: 350
// Enter amount (in kg): -3
// Invalid input, enter a positive number
// Enter amount (in kg): 5
// Enter price: -67
// Invalid input, enter a positive number
// Enter amount (in kg): 10
// Enter price: 650
// Enter amount (in kg): 0
// Total amount (in kg): 15, Total price: 1000, Average price per kg: 66.67

#include <iostream>
using namespace std;
int main()
{
    int amount = 1, price, total_price = 0, total_amount = 0;
    while (amount != 0)
    {
        cout << "\nEnter amount(in kg): ";
        cin >> amount;
        if(amount ==0){
            break;
        }
        if (amount < 0)
        {
            cout << "Invalid input, enter a positive number" << endl;
            continue;
        }
        cout << "Enter price: ";
        cin >> price;
        if (price < 0)
        {
            cout << "Invalid input, enter a positive number" << endl;
            continue;
        }
        total_amount += amount;
        total_price += price;
    }
    cout << "\nTotal amount (in kg): " << total_amount << endl;
    cout << "Total price : " << total_price << endl;
    cout << "Average price per kg: " << total_price / total_amount << endl;
    return 0;
}