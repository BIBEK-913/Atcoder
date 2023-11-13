#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int i, pos1, pos2, pos3, n;
    char *s;
    scanf("%d", &n);
    s = (char *)malloc(n * sizeof(char));
    for (i = 0; i < n; i++)
    {
        scanf("%c", &s[i]);
        if (s[i] == '|')
            pos1 = i;
        if (s[i] == '*')
            pos2 = i;
        if (s[i] == '|' && i > pos1)
            pos3 = i;
    }
    if (pos2 > pos1 && pos2 < pos3)
        printf("in");
    else
        printf("out");
    free(s);
    return 0;
}