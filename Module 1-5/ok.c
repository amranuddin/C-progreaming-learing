#include <stdio.h>
int main()
{
    char a;

    scanf("%c", &a);

    if (a >= 'A' && a <= 'Z')
    {
        printf("is alpha %c", a);
    }

    return 0;
}