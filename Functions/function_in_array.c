#include <stdio.h>
void fun(int ar[], int a, int m,int n)
{
    ar[n] = m;
    for (int i = 0; i < a; i++)
        printf("%d ", ar[i]);
}


int main()
{
    int a, m,n;
    scanf("%d %d %d", &a, &n, &m);
    int ar[a];

    for (int i = 0; i < a; i++)
    {
        scanf("%d", &ar[i]);
    }
    fun(ar, a, m,n);
    return 0;
}