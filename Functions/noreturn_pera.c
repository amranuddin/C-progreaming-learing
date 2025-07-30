#include <stdio.h>
void sum(int a, int b)
{
    int amr = a + b;
    printf("%d\n", amr);
    return;
    printf("%d", amr);
}
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    sum(a, b);

    printf("my name is amran");
    return 0;
}