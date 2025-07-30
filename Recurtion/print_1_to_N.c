#include <stdio.h>

void amin(int i)
{
    if (i == 5)
    {
        printf("%d", i);
        return;
    }
    printf("%d ", i);
    amin(i + 1);
}
int main()
{
    int i = 1;
    amin(i);
    return 0;
}