#include <stdio.h>
void ra(int a[], int n, int i)
{
    if (i == n-1)
    {
        printf("%d", a[i]);
        return;
    }
    if(a[i]==23)
    {
        a[i]=32;
    }
     ra(a, n, i + 1);
    printf(" %d", a[i]);
       
}

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    ra(a, n, 0);
    return 0;
}