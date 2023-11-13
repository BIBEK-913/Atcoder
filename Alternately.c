#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int n, i, c = 1;
    char *S;
    scanf("%d", &n);
    getchar();
    S = (char *)malloc(n + 1);
    for (i = 0; i < n; i++)
    {
        scanf("%c", &S[i]);
    }
    if (n == 1)
        printf("Yes\n");
    else
    {
        for (i = 0; i <= n - 2; i++)
        {
            if (S[i] == 'M' && S[i + 1] == 'M' || S[i] == 'F' && S[i + 1] == 'F')
            {
                printf("No\n");
                c = 0;
                break;
            }
        }
        if (c)
            printf("Yes\n");
    }
    free(S);
    return 0;
}