#include <stdio.h>
int main ()
{
    int a [6]={12, 10, 20, 30, 40 ,50};

    *(a+3)=67;
    for(int  i=0; i<=5; i++)
    {
    printf("%d ",a[i]);
    }
    return 0;
}