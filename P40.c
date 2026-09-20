//Q40: Write a program to find the 1’s complement of a binary number and print it.

/*
Sample Test Cases:
Input 1:
1010
Output 1:
0101

Input 2:
1111
Output 2:
0000

*/

#include <stdio.h>

int main()
{
    long number;
    long originalNumber;
    long complement;
    long place;
    int digit;

    number = 0;
    complement = 0;
    place = 1;

    printf("Enter a binary number: ");
    scanf("%ld", &number);

    originalNumber = number;


    while (number != 0)
    {
        digit = number % 10;

        /* Flip the digit: 0 becomes 1, and 1 becomes 0 */
        if (digit == 0)
        {
            complement = complement + (1 * place);
        }
        else
        {
            complement = complement + (0 * place);
        }

        number = number / 10;
        place = place * 10;
    }

    printf("1's complement of %ld is %ld\n", originalNumber, complement);

    return 0;
}