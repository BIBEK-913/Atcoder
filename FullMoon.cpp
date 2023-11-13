#include <iostream>
using namespace std;
int main()
{
    int n, m, p, k;
    cin >> n >> m >> p;
    if (n < m)
        cout << 0;
    else
    {
        k = (n - m) / p + 1;
        cout << k;
    }
    return 0;
}