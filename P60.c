//Q60: Count positive, negative, and zero elements in an array.

/*
Sample Test Cases:
Input 1:
5
-1 0 1 2 -2
Output 1:
Positive=2, Negative=2, Zero=1

*/

#include <stdio.h>

int main()
{
    int n;
    int i;
    int a[100];
    int positive = 0;
    int negative = 0;
    int zero = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        if (a[i] > 0)
        {
            positive++;
        }
        else if (a[i] < 0)
        {
            negative++;
        }
        else
        {
            zero++;
        }
    }

    printf("Positive=%d, Negative=%d, Zero=%d\n", positive, negative, zero);
}