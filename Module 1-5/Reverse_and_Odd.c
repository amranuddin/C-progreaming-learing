#include <stdio.h>
int main ()
{
    int N;

    scanf("%d",&N);
    int A[N];
   
    for (int i=0; i<N; i++)
    
    {
        scanf("%d", &A[i]);
    }
    int sum= N%2==0;
    for (int i=sum; i>=N; i=i-2)
   
    {
        printf("%d ", A[i]);
    }

    return 0;
}