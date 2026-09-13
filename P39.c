//Q39: Write a program to find the product of odd digits of a number.

/*
Sample Test Cases:
Input 1:
12345
Output 1:
15 (1*3*5)

Input 2:
2468
Output 2:
1 (no odd digits, assume 1)

*/

#include <stdio.h>

int main(){
    int num;
    int pro=1;
    int x,c;
    printf("Enter a number: ");
    scanf("%d",&num);
    while(num>0){
x=num%10;
if(x%2!=0){
    pro=pro*x;
    }
    else{
        c=1;
    }
    num=num/10;
}
if(c==1){
    printf("%d",c);
}
else{
printf("Product of odd digits: %d", pro);
}
}