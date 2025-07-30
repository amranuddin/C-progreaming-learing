#include <stdio.h>
int main()
{
    float n;
    scanf("%f", &n);

    while (n != 0)
    {
        printf("%.2f\n", n);
        n /= 2;
    }
}