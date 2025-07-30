 #include <stdio.h>
 #include <string.h>

int fun(char a[])
{    int s=strlen(a);
    int flag=0;
    for (int i=0; i<s/2;i++)
    {
       if ( a[i]!=a[s-1-i])
       {
            flag=1;
            break;
       }  
    }
    return flag;
}
int main ()
{
   
    char n[1000];
    scanf("%s",n);
 
  
  
     int pall=fun(n);

     if (pall==0)
     {
        printf("This is pallindrome");
     }
     else
     {
        printf("This is not pallindrome");
     }
    return 0;
}