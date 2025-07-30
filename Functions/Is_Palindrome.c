#include <stdio.h>

#include <string.h>

int is_palindrom(char S[])

{
    int ret = 1;
    
    int lenth = strlen(S);
    for (int i = 0; i < lenth / 2; i++)
    {
        if (S[i] != S[lenth - 1 - i])
        {
            ret = 0;
            break;
        }
    }
    return ret;
}

int main()
{
    char S[1001];
    scanf("%s", S);
    int pali = is_palindrom(S);
    if (pali == 1)
    {
        printf("Palindrome");
    }
    else if (pali == 0)
    {
        printf("Not Palindrome");
    }
    return 0;
}