#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char let[101], temp;
    gets(let);
    int n = strlen(let);
    for (int i = 0; i < n / 2; i++)
    {
        temp = let[2 * i + 1];
        let[2 * i + 1] = let[2 * i];
        let[2 * i] = temp;
    }
    puts(let);
    return 0;
}