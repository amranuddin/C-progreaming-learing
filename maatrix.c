#include <stdio.h>
int main(){
int r,c;
scanf("%d %d ",&r,&c);
int a[r][c];
for (int i=0; i<r;i++)
{
    for(int j=0; j<c;j++)
    {

    scanf("%d", & a [i] [j]);
    }
}

int m;
scanf("%d", &m);


    for(int j=0; j<c;j++)
    {
    
    printf("%d ", a [m] [j]);

    }
    

return 0;
}