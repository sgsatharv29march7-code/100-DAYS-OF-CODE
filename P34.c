//Q34: Write a program to check if a number is prime.

/*
Sample Test Cases:
Input 1:
7
Output 1:
Prime

Input 2:
10
Output 2:
Not prime

*/

#include <stdio.h>

int main(){
    int num;
    printf("enter a number");
    scanf("%d",&num);
    int i;
    int c=0;
    for(i=1;i<=num;i++){
        if(num%i==0){
            c++;
        }
    }
    if(c==2){
        printf("prime number");
    }
    else{
        printf("not a prime number");
    }
}