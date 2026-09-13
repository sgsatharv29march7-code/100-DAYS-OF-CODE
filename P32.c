//Q32: Write a program to check if a number is a palindrome.

/*
Sample Test Cases:
Input 1:
121
Output 1:
Palindrome

Input 2:
123
Output 2:
Not palindrome

*/

#include <stdio.h>

int main(){
    int num;
    printf("enter a number");
    scanf("%d",&num);
    int check_num=num;
    int rev=0;
    int x=0;
    while(num!=0){
        x=num%10;
        rev=rev*10+x;
        num=num/10;
    }
    if(check_num==rev){
        printf("palindrome number");
    }
    else{
        printf("not a palindrome number");
    }
}