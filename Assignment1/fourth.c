#include <stdio.h>

int main ()
{
    int digit;

    printf ("Enter the number: ");
    scanf ("%d", &digit);

    int count = 0;
    int temp = digit;
    while (temp != 0)
    {
        count++;
        temp /= 10;
    }

    printf ("\nThe number of digits in %d are %d", digit, count);
    return 0;
}