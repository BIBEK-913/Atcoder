#include <iostream>
using namespace std;
int main()
{
    int n, i, c = 0;
    cin >> n;
    int *arrin;
    arrin = (int *)malloc(n * 7 * 4);
    for (i = 0; i < n * 7; i++)
    {
        cin >> arrin[i];
        if (i == (n * 7) - 1)
            c += arrin[i];
        if ((i % 7 == 0 && i != 0) || i == (n * 7) - 1)
        {
            cout << c << " ";
            c = 0;
        }
        c += arrin[i];
    }
    return 0;
}