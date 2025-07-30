#include <stdio.h>
#include <string.h>
int main ()
{
    char amr [139];
    fgets(amr, 33, stdin);
//    int count=0;
//    for (int i=0;amr[i]!= '\0' ;i++)
//    {
//     // count ++;
//    }

int size= strlen(amr);
   printf("%d", size);
    return 0;
}