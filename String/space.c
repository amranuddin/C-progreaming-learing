#include <stdio.h>
#include <string.h>


int main ()
{
    char amr[55];
    fgets(amr,15,stdin);
    printf("%s", amr);

    return 0;
}