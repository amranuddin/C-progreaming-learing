#include <stdio.h>
int sum()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int amr = a + b;
    return amr;
}

int main()
{
    int come = sum();
    printf("%d", come);
    return 0;
}