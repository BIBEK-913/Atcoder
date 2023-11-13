#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    long long int t, n, k, m, a, b, c;
    cin >> t;
    while (t--)
    {
        c = 0;
        cin >> n >> k;
        if (n == k)
        {
            cout << "Yes" << endl;
            c = 1;
        }
        else
        {
            a = k - 1;
            b = n - a;
            while (a > 0)
            {
                if (b % 3 == 0)
                {
                    cout << "Yes" << endl;
                    c = 1;
                    break;
                }
                else
                {
                    a--;
                    b = n - a;
                }
            }
            if (c == 0)
            {
                b = n;
                while (b > 0)
                {
                    m = (int)(log(b) / log(3));
                    b = b - pow(3, m);
                    c++;
                }
                if (b == 0 && c == k)
                    cout << "Yes" << endl;
                else
                    cout << "No" << endl;
            }
        }
    }
    return 0;
}