//Q19: Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

#include <stdio.h>

int main(){
    int a,b,c;
    printf("enter sides of triangle");
    scanf("%d%d%d",&a,&b,&c);
    if(a==b && b==c){
    printf("equilateral triangle");
    }
    if(a==b && b!=c || a==c && c!=b || b==c && c!=a){
        printf("isosceles triangle");
    }
        if (a!=b && b!=c && c!=a){
        printf("scalene triangle");
}
        else { 
        printf("not a triangle");
    }
    }
    