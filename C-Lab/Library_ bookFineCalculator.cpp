/*4. Library System — Fine Calculator

A library charges a fine based on number of late days.

Write a function:
int calculateFine(daysLate)
Rules:

0–5 days → 10 Rs per day
6–10 days → 20 Rs per day
10 days → 50 Rs per day

After 30 days → auto “Book Lost” message (separate function prints message)
Use multiple functions for fine calculation and message handling.*/


#include<iostream>
using namespace std;

int BookLost(int daysLate){
    if(daysLate > 30)
    cout<<"Book Lost";
    return 0;
}

int calculateFine(int daysLate){
    int fine;
    if(daysLate >= 0 && daysLate <= 5){
    fine = daysLate * 10;
    cout<<"fine: "<<fine;
    }
   else if(daysLate >= 6 && daysLate <= 10){
    fine = daysLate*20;
    cout<<"fine: "<<fine;
    }
    else if(daysLate > 10){
    fine = daysLate*30;
    cout<<"fine: "<<fine;
    }
    else
    BookLost(daysLate);
    return fine;
}

int main()
{
    int daysLate;
    cout<<"Enter late day: ";
    cin>>daysLate;
    calculateFine(daysLate);
    return 0;
}