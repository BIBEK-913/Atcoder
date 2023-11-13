#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int main()
{
    int i;
    char S[101];
    gets(S);
    for (i = 0; i < strlen(S); i++)
    {
        if (isupper(S[i]))
            printf("%d", i + 1);
    }
    return 0;
}