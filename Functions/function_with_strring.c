#include <stdio.h>
void ok(char m[])
{
  printf("%s \n", m);
  printf("%d", strlen(m));
}
int main ()
{
    char s[10];
    scanf("%s", s);
    ok(s);
    return 0;
}