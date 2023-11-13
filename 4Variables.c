// TIME LIMIT EXCEEDED
#include <stdio.h>
int main()
{
    int n, AB, CD, i, j, c = 0, mul = 1, ctot = 0;
    scanf("%d", &n);
    for (i = 1; i < n; i++)
    {
        AB = i;
        CD = n - i;
        c = 0;
        mul = 1;
        if (AB == 1 && CD == 1)
            ctot++;
        else
        {
            for (j = 1; j <= AB; j++)
            {
                if (AB % j == 0)
                    c++;
            }
            mul = c;
            c = 0;
            for (j = 1; j <= CD; j++)
            {
                if (CD % j == 0)
                    c++;
            }
            mul *= c;
            ctot = ctot + mul;
        }
    }
    printf("%d", ctot);
    return 0;
}