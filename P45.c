//Q45: Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.

/*
Sample Test Cases:
Input 1:
3
Output 1:
Approximate sum: 1.56

Input 2:
5
Output 2:
Approximate sum: 2.22

*/

#include <stdio.h>

int main()
{
    int n;
    int i;
    double sum;
    double dm;
    double nm;
    double d;

    n = 0;
    sum = 0.0;

    printf("Enter the number of terms: ");
    scanf("%d", &n);


    i = 1;
    while (i <= n)
    {
        n = 2 * i;
        d = 4 * i - 1;
        d= nm / dm;
        sum = sum + d;
        i++;
    }

    printf("Sum of the series up to %d terms = %.4f\n", n, sum);
}