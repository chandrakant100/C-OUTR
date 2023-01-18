/*
Write a program which reads a set of marks in an examination, count the number of pass marks,
number of fail marks, percentage of pass and fail.
*/
#include <stdio.h>

int main()
{
    int totalsub, minpass, fail = 0, pass = 0;
    printf("Total no of subject:");
    scanf("%d", &totalsub);
    printf("Pass mark=");
    scanf("%d", &minpass);
    for (int i = 1; i <= totalsub; i++)
    {
        int mark;
        printf("Give your mark:");
        scanf("%d", &mark);
        if (mark < minpass)
        {
            fail++;
        }
    }
    pass = totalsub - fail;
    printf("Total no of fail=%d\n", fail);
    printf("Total no of pass=%d\n", pass);
    printf("Percentage of fail:%d\n", (fail * 100) / totalsub);
    printf("Percentage of pass:%d", (pass * 100) / totalsub);
    return 0;
}