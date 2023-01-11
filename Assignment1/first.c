#include <stdio.h>

int main ()
{
    int a,b,c;
    printf("Enter the three digits:\n");
    scanf("%d%d%d", &a,&b,&c);
    printf ("A: %d, B: %d, C: %d\n", a,b,c);
    int temp = b;
    b = a;
    a = c;
    c = temp;
    printf ("A: %d, B: %d, C: %d\n", a,b,c);
    return 0;
}