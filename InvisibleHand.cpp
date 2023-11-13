#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int sell, buy, i, j, c1 = 0, c2 = 0, deflt = 0;
    cin >> sell >> buy;
    vector<int> s(sell), b(buy);
    for (i = 0; i < sell; i++)
    {
        cin >> s[i];
    }
    for (i = 0; i < buy; i++)
    {
        cin >> b[i];
    }
    sort(s.begin(), s.end());
    sort(b.begin(), b.end());
    for (i = 0; i < sell; i++)
    {
        c1 = i + 1;
        c2 = b.size();
        for (j = 0; j < b.size(); j++)
        {
            if (b[j] < s[i])
            {
                c2 = c2 - 1;
                if (j == b.size() - 1 && c2 == 0)
                    deflt = b[j] + 1;
                b.erase(b.begin() + j);
                j--;
            }
            else
                break;
        }
        if (c1 >= c2 && c2 > 0)
        {
            cout << s[i];
            break;
        }
        else if (c2 == 0)
        {
            cout << deflt;
            break;
        }
    }
    return 0;
}