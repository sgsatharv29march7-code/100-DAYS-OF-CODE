//Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.
#include <stdio.h>

int main(){
    float principal,r,time,s_interest,c_interest;
    printf("enter principal,rate and time");
    scanf("%f%f%f",&principal,&r,&time);
    s_interest = (principal*r*time)/100;
    
}