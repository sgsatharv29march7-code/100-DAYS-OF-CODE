//Q38: Write a program to find the sum of digits of a number.

/*
Sample Test Cases:
Input 1:
123
Output 1:
6

Input 2:
999
Output 2:
27

*/

#include <stdio.h>

int main(){
    int num;
    int x,sum=0;
    int i;
printf("enter a number");
scanf("%d",&num);
while(num!=0){
    x=num%10;
    sum=sum+x;
    num=num/10;
}
printf("sum=%d",sum);
}