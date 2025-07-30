#include <stdio.h>

void rectr(int n, int i)
{   
   
    if ( i==n)
    {
        return;
    }
    printf("I love Recursion \n");
    rectr(n,i+1);
}
int main()

{   int i=0;
    int n;
    scanf("%d", &n);
    rectr(n,i);
    return 0;
}