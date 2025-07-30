#include <stdio.h>
int main ()
{
    int sum=0;
    int N;
    scanf("%d",&N);
    int A[N];
  for(int i=0 ; i<N;i++)
{
    sum = sum + A[i];
}
if ( sum>0)
{
    int amr= sum * -1;
}
printf("%d ", sum);
    return 0;
}