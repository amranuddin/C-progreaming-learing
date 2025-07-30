#include <stdio.h>

void amin()
{
    printf("Amin \n");
    amin();
}
int main ()
{
    printf("Amran \n");
    amin();
    return 0;
}