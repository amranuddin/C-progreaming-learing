#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    if (a % 2 == 0)
    {
        printf("even number \n");
        if (a % 4 == 0)
        {
            printf("this number is devidd by 4");
        }
    }
    else
    {
        printf("ODD Number");
    }
    return 0;
}