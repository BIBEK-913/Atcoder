#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int n, m, i, j, d, left, right;
    cin >> n >> m;
    vector<int> a(m);
    for (i = 0; i < m; i++)
    {
        cin >> a[i];
    }
    for (i = 1; i <= n; i++)
    {
        left = 0;
        right = m - 1;
        j = (left + right) / 2;
        while (!(a[j] >= i && (j == 0 || a[j - 1] < i)))
        {
            if (a[j] < i && a[j + 1] >= i)
            {
                j += 1;
                break;
            }
            else if (a[j] > i && a[j - 1] == i)
            {
                j -= 1;
                break;
            }
            else if (a[j] < i)
            {
                left = j;
            }
            else if (a[j] > i)
            {
                right = j;
            }
            j = (left + right) / 2;
        }
        d = a[j] - i;
        cout << d << endl;
    }
    return 0;
}