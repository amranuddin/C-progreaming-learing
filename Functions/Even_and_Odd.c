#include <stdio.h>

void odd_even(int A[], int N)
{
    int count1=0;
    int count2=0;
    for(int i=0; i<N; i++)
       {
        if (A[i]%2==0)
        {
            count1++;
        }
        else
        {
            count2++;
        }
       }
       printf("%d %d", count1,count2);
}
int main ()
{
    int N;
    scanf("%d",&N);
    int A[N];
    for(int i=0; i<N;i++)
    {
        scanf("%d",&A[i]);
    }
    odd_even(A,N);
    return 0;
}