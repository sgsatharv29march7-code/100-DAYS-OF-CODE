//Q23: Write a program to calculate library fine based on late days as follows: 
//First 5 days late: ₹2/day 
//Next 5 days late: ₹4/day 
//Next 20 days days late: ₹6/day 
//More than 30 days: Membership Cancelled.

/*
Sample Test Cases:
Input 1:
4
Output 1:
Fine ₹8

Input 2:
8
Output 2:
Fine ₹22

Input 3:
15
Output 3:
Fine ₹60

Input 4:
31
Output 4:
Membership Cancelled

*/

#include <stdio.h>

int main(){
    int days_late,fine;
    printf("enter number of days late");
    scanf("%d",&days_late);
    if(days_late<=5){
        fine = days_late*2;

    }
    else if(days_late>5 && days_late<=10){
        fine = days_late*4;

    }
    else if(days_late>10 && days_late<=30){
        fine = days_late*6;

    }
    else{
        printf("membership cancelled");
    }
    printf("fine = %d",fine);
}