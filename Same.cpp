#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n, i, c = 1;
    cin >> n;
    vector<int> a(n);
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (i = 0; i < n - 1; i++)
    {
        if (a[i] != a[i + 1])
        {
            cout << "No" << endl;
            c = 0;
            break;
        }
    }
    if (c)
        cout << "Yes" << endl;

    return 0;
}