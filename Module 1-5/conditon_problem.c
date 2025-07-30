#include <stdio.h>
int main()
{
    int a;

    scanf("%d %d", &a);
    int ki=a/1000;

    if (ki%2 == 0)
    {
        printf("EVEN");
    }
    
    else
    {
        printf("ODD");
    }

    return 0;
}