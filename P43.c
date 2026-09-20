//Q43: Write a program to check if a number is a strong number.

/*
Sample Test Cases:
Input 1:
145
Output 1:
Strong number

Input 2:
123
Output 2:
Not strong number

*/

#include <stdio.h>

int main()
{
    int n=0;
    int originalNumber;
    int remainder;
    int digitFactorial;
    int i;
    int sum=0;

    printf("Enter a number: ");
    scanf("%d", &n);


    originalNumber = n;


    while (n != 0)
    {
        remainder = n % 10;
        digitFactorial = 1;
        i = 1;


        while (i <= remainder)
        {
            digitFactorial = digitFactorial * i;
            i = i + 1;
        }

        sum = sum + digitFactorial;
        n = n / 10;
    }


    if (sum == originalNumber)
    {
        printf("%d is a strong number.\n", originalNumber);
    }
    else
    {
        printf("%d is not a strong number.\n", originalNumber);
    }
}