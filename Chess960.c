#include <stdio.h>
#include <string.h>
int main()
{
    int i, pos1 = 0, pos2 = 0, pos3 = 0, c = 0;
    char s[9];
    gets(s);
    for (i = 0; i < 8; i++)
    {
        if (s[i] == 'B' && pos1 == 0)
            pos1 = i + 1;
        if (i > pos1 - 1 && s[i] == 'B')
            pos2 = i + 1;
    }
    if (pos1 % 2 == pos2 % 2)
        c = 0;
    else
        c++;
    pos1 = 0;
    pos2 = 0;
    for (i = 0; i < 8; i++)
    {
        if (s[i] == 'R' && pos1 == 0)
            pos1 = i + 1;
        if (s[i] == 'K')
            pos2 = i + 1;
        if (i > pos1 - 1 && s[i] == 'R')
            pos3 = i + 1;
    }
    if (pos2 > pos1 && pos2 < pos3)
        c++;
    if (c == 2)
        printf("Yes");
    else
        printf("No");
    return 0;
}