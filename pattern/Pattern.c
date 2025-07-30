#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    int i, j, k, l;

    int star = 1;
    int space = N - 1;
    char sym ;
     
    for (i = 1; i < N; i++)
    {
        if (i % 2 == 1)
        {
            sym ='#';
        }
        else
        {
            sym='-';
        }
        for (j = 1; j <= space; j++)
        {
            printf(" ");
        }

        for (j = 1; j <= star; j++)
        {

            printf("%c", sym);
        }

        printf("\n");
        star += 2;
        space--;
    }


   for (i = N-1; i>=0; i--)
    {
    

        if (i % 2 == 1)
        {
            sym ='-';
        }
        else
        {
            sym='#';
        }
        for (j = 1; j <= space; j++)
        {
            printf(" ");
        }

        for (j = 1; j <=star; j++)
        {

            printf("%c", sym);
        }

        printf("\n");
        star -= 2;  
        space++;
    }
    return 0;
}