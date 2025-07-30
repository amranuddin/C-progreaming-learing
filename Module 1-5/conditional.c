#include <stdio.h>
int main()
{
    int n;

    scanf("%d", &n);
    if (n > 50)
    {
        printf("Burger khabo");
    }
    else if (n > 30)
    {
        printf("Burger khabo sathe fuchakao");
    }
    else
    {
        printf("burger khabo na");
    }

    return 0;
}