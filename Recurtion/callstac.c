#include <stdio.h>
void akila()
{
    printf("Akila");
}
void fokhor()
{
    printf("Fokhor \n");
    akila();
}
void shekha()
{
    printf("shekha \n");
    fokhor();
}
void amin()
{
    printf("Amin \n");
    shekha();
}
int main ()
{
    printf("Amran \n");
    amin();
    return 0;
}