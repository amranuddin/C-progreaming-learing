#include <stdio.h>
#include <string.h>
int main()
{
    char a [100], b[100];
    scanf("%s %s",a ,b);
    // int la= strlen(a);
    // int lb= strlen(b);
    
    // for ( int i=0; i<=lb; i++)
    // {
    //     a[i+la]=b[i];
    // }

    strcat(a,b);
    printf("%s %s", a , b)
;    return 0;
}
