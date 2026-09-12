//Q27: Write a program to print the sum of the first n odd numbers.

/*
Sample Test Cases:
Input 1:
3
Output 1:
9

Input 2:
5
Output 2:
25

*/

#include <stdio.h>

int main(){
    int n,i;
    int c=1;
    int sum=0;
    printf("enter a number");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        sum=sum+c;
        c=c+2;
    }
    printf("%d",sum);
}