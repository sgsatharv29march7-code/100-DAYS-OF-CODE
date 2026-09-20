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

int main()
{
    int n;
    int i;
    double sum;
    double d;

    n = 0;
    sum = 0.0;

    printf("Enter the number of terms: ");
    scanf("%d", &n);


    if (n <= 1)
    {
        sum = sum + 1.0;
    }


    i = 2;
    while (i <= n)
    {
        d= (2 * i - 1) / (2 * i);
        sum = sum + d;
        i = i + 1;
    }

    printf("Sum of the series up to %d terms = %.4f\n", n, sum);
}