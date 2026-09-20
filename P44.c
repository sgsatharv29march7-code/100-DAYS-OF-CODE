//Q44: Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.

/*
Sample Test Cases:
Input 1:
3
Output 1:
Approximate sum: 3.3

Input 2:
5
Output 2:
Approximate sum: 4.4

*/

#include <stdio.h>

int main(){
    int i=3;
    int x=4;
    int j;
    float sum =1;
    int n;
    printf("enter a number");
    scanf("%d",&n);
    for (j=1;i<=n;j++)
    {
        sum=sum+i/x;
        x=x+2;
        i=i+2;

    }
    printf("sum of series is :%f",sum);
}