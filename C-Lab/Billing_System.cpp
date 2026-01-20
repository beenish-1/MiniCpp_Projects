/*1. Billing System — Calculate Total Invoice Amount

A software company is developing a small billing module for a shop.
Write functions to:
Accept item price and quantity

Compute gross total

Apply 5% sales tax

Return final invoice amount

Requirement:
Create separate functions for gross total, tax calculation, and final bill calculation.
Demonstrate how these functions work together in the main program.*/


#include <iostream>
using namespace std;

int gross_total(int price, int quantity)
{
    int total = price * quantity; 
    return total;
}

int final_price(int gross_total, int sales_tax)
{
    int final_amt = gross_total - (gross_total * sales_tax / 100);
    return final_amt;
}

int main()
{
    int price, quantity;
    int sales_tax = 5; 

    cout << "Enter the item price: ";
    cin >> price;
    cout << "Enter the item quantity: ";
    cin >> quantity;

    int total = gross_total(price, quantity); 
    int final_amt = final_price(total, sales_tax);

    cout << "Gross Total: " << total << endl;
    cout << "Final Price after " << final_amt << endl;

    return 0;
}
