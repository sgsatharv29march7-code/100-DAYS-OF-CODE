//Q33: Write a program to check if a number is an Armstrong number.

/*
Sample Test Cases:
Input 1:
153
Output 1:
Armstrong

Input 2:
123
Output 2:
Not Armstrong

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
        rev=rev+(x*x*x);
        num=num/10;
    }
    if(check_num==rev){
        printf("armstrong number");
    }
    else{
        printf("not an armstrong number");
    }
}