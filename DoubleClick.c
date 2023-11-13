#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, d, i;
    int *arr;
    scanf("%d %d", &n, &d);
    arr = (int *)malloc(n * 4);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if (i > 0 && arr[i] - arr[i - 1] <= d)
        {
            printf("%d", arr[i]);
            break;
        }
        else if (i == n - 1)
            printf("-1");
    }
    free(arr);
    return 0;
}
