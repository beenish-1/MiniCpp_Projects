/*6. Student Portal — GPA Calculator

Write a function that receives marks of 5 subjects and returns:
Average
Grade (A, B, C, D, F)
GPA (based on grade)

Use separate functions:
calculateAverage()
calculateGrade()
convertGradeToGPA()

Main program calls all three to display final result.*/


#include<iostream>
using namespace std;

float calculateAverage(int sub1, int sub2, int sub3,int sub4, int sub5){
int sum = sub1 + sub2 + sub3 + sub4 + sub5;
float avg = sum/5.0;
return avg;
}

int calculateGrade(float avg){
    if(avg>=84.5){
    cout<<"Your grade is A";
    }
    else if(avg>=80){
    cout<<"Your grade is B";
    }
    else if(avg>=75){
    cout<<"Your grade is C";
    }
    else if(avg>=70){
    cout<<"Your grade is D";
    }
    else if(avg>=65){
    cout<<"Your grade is E";
    }
    else{
    cout<<"Your grade is F";
    }
    return 0;
}

int GPA(char grade){
    if(grade=='A')
    cout<<"Your GPA is 4.0";
    else if(grade=='B')
    cout<<"Your GPA is 3.0";
    else if(grade=='C')
    cout<<"Your GPA is 2.5";
    else if(grade=='D')
    cout<<"Your GPA is 2.0";
    else if(grade=='E')
    cout<<"Your GPA is 1.5";
    else
    cout<<"Your GPA is 0.5";
    return 0;
}

int main()
{
    int sub1, sub2, sub3, sub4, sub5;
    float avg;
    char grade;
    cout<<"Enter marks of five subjects: ";
    cin>>sub1>>sub2>>sub3>>sub4>>sub5;
    avg = calculateAverage(sub1, sub2, sub3, sub4, sub5);
    cout<<"Avrage marks: "<<avg<<endl;
    grade = calculateGrade(avg);
    cout<<"Grade: "<<grade<<endl;
    GPA(grade);
    return 0;
}