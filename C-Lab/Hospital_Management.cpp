/*2. Hospital Management — Patient Age & Category Calculation

A hospital system wants to categorize patients automatically.

Write a function that accepts date of birth and returns:

Age in years

Category: Child, Adult, Senior

Hint:
Write a helper function to calculate age from year.*/



#include<iostream>
using namespace std;

int patient_age(int birth_year, int current_year)
{
     int age = current_year - birth_year;
     return age;
}

int Category(int age)
{
    if(age <= 18){
    cout<<"Child Patient";    
    }
    
    else if(age > 18 && age <= 40){
    cout<<"Adult Patient";
    }
    
    else
    cout<<"Senior Patient";
    
    return 0;
}

int main()
{
    int B_year, C_year, age;
    cout<<"Enter your birth year:";
    cin>>B_year;
    cout<<"Enter current year:";
    cin>>C_year;
    age = patient_age(B_year,C_year);
    cout<<"Patient age: " << age ;
    cout<<"\nPatient Category: ";
    Category(age);
    return 0;
}