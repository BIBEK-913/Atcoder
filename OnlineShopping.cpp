#include <iostream>
using namespace std;
int main()
{
    int n, s, k, p, q, i, cost = 0;
    cin >> n >> s >> k;
    while (n--)
    {
        cin >> p >> q;
        cost += p * q;
    }
    cost >= s ? cout << cost << endl : cout << cost + k << endl;
    return 0;
}