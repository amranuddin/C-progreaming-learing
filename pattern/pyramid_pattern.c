#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int star = 1;
    int space = n - 1;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= space; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= star; j++)
        {
            printf("*");
        }

        printf("\n");
        star++;
        space--;
    }
    return 0;
}