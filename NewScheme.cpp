#include <iostream>
using namespace std;
int main()
{
    int i, s[8], c = 1;
    for (i = 0; i < 8; i++)
    {
        cin >> s[i];
    }
    for (i = 0; i < 8; i++)
    {
        if ((i < 7 && s[i] > s[i + 1]) || (s[i] < 100 || s[i] > 675) || (s[i] % 25 != 0))
        {
            cout << "No";
            c = 0;
            break;
        }
    }
    if (c)
        cout << "Yes";
    return 0;
}