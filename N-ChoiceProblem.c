#include <stdio.h>
int main()
{
    int n, a, b, i, j, s;
    scanf("%d %d %d", &n, &a, &b);
    s = a + b;
    for (i = 1; i <= n; i++)
    {
        scanf("%d", &j);
        if (j == s)
        {
            printf("%d", i);
            break;
        }
    }
    return 0;
}
