//Q22: Write a program to find profit or loss percentage given cost price and selling price.

/*
Sample Test Cases:
Input 1:
1000 1200
Output 1:
Profit 20%

Input 2:
1000 800
Output 2:
Loss 20%

Input 3:
1000 1000
Output 3:
No Profit No Loss

*/

#include <stdio.h>
int main(){
    float cp,sp;
    float profit,loss,profit_per,loss_per;
    printf("enter cost price and selling price");
    scanf("%f%f",&cp,&sp);
    if (sp>cp){
        profit = sp-cp;
        profit_per = profit/cp*100;
        printf("profit %.2f%%",profit_per);
    }
    else if (cp>sp){
        loss = cp-sp;
        loss_per = loss/cp*100;
        printf("loss %.2f%%",loss_per);
    }
    else{
        printf("no profit no loss");
    }
}