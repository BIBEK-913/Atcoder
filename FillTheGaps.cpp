#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n, i;
    cin >> n;
    vector<int> a(n);
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<int> b;
    for (i = 0; i <= n - 2; i++)
    {
        b.push_back(a[i]);
        if (abs(a[i + 1] - a[i]) > 1)
        {
            if (a[i] < a[i + 1])
            {
                int num = a[i] + 1;
                while (num < a[i + 1])
                {
                    b.push_back(num);
                    num++;
                }
            }
            else
            {
                int num = a[i] - 1;
                while (num > a[i + 1])
                {
                    b.push_back(num);
                    num--;
                }
            }
        }
        if (i == n - 2)
            b.push_back(a[n - 1]);
    }
    for (i = 0; i < b.size(); i++)
    {
        cout << b[i] << " ";
    }
    return 0;
}