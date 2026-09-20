//Q54: Write a program to print the following pattern:

//   *
//  ***
// *****
//*******
// *****
//  ***
//   *


/*
Sample Test Cases:
Input 1:

Output 1:
Pattern with layers of stars as shown.

*/

#include <stdio.h>

int main(){
 int i,j=0;
 for(i=1;i<=4;i++){
    for(j=4;j>=i;j--){
        printf(" ");
    }
    for(j=1;j<=i;j++){
        printf("*");
    }
    for(j=2;j<=i;j++){
        printf("*");
    }
    printf("\n");
 }
 for(i=3;i>=1;i--){
    for(j=4;j>=i;j--){
        printf(" ");
    }
    for(j=1;j<=i;j++){
        printf("*");
    }
    for(j=2;j<=i;j++){
        printf("*");
    }
    printf("\n");
 }
}