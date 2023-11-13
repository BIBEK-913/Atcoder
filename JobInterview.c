#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int n, i, c1 = 0, c2 = 0;
    char s[101];
    scanf("%d", &n);
    gets(s);
    for (i = 0; i < n; i++)
    {
        if (s[i] == 'o')
            c1++;
        if (s[i] == 'x')
            c2++;
    }
    if (c1 > 0 && c2 == 0)
        printf("Yes");
    else
        printf("No");
    return 0;
}