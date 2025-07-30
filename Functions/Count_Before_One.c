#include <stdio.h>
int count_before_one(int A[], int N)
{
    int val=0;
    for (int i = 0; i < N; i++)
    {
        if (A[i] == 1)
        {
            break;
        }
        val++;
    }

    return val;
}
int main()
{
    int N;
    scanf("%d", &N);
    int A[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
    }
    int go = count_before_one(A, N);
    printf("%d ", go);
    return 0;
}