#include <iostream>
using namespace std;
int main()
{
    int n, max = 0, need, p1, p;
    cin >> n;
    cin >> p1;
    while (--n)
    {
        cin >> p;
        if (p > max)
            max = p;
    }
    if (p1 <= max)
        need = max - p1 + 1;
    else
        need = 0;
    cout << need;
    return 0;
}