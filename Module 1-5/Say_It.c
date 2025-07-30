#include <stdio.h>
int main()
{ 
   int n;
   scanf("%d", &n);

   int amr [n];
   
   for (int i=0; i<n; i++)
   {
    scanf(" %d", & amr [i]);
   }
   for (int i=0; i<n; i++)
   {
    printf("%d. I Want More Assignments \n", i+1);
   }
    return 0;
}