#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int n, i, c = 0, a = 0, t = 0;
    char s[101];
    scanf("%d", &n);
    getchar();
    gets(s);
    for (i = 0; i < n; i++)
    {
        if (n == 1)
        {
            if (s[i] = 'A')
                printf("A");
            else
                printf("T");
            c++;
            break;
        }
        if (i == n - 1 && s[i] == 'A' && a + 1 == t)
        {
            printf("T");
            c++;
            break;
        }
        else if (i == n - 1 && s[i] == 'T' && t + 1 == a)
        {
            printf("A");
            c++;
            break;
        }
        if (i < n - 1 && s[i] == 'A')
            a++;
        else if (i < n - 1 && s[i] == 'T')
            t++;
    }
    if (c == 0)
    {
        if (a > t)
            printf("A");
        else
            printf("T");
    }
    return 0;
}