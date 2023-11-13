#include <iostream>
#include <string>
using namespace std;
int main()
{
    int i, c = 1;
    string s;
    cin >> s;
    if (s.size() != 1)
    {
        for (i = 0; i <= s.size() - 2; i++)
        {
            if (int(s[i]) <= int(s[i + 1]))
            {
                c = 0;
                break;
            }
        }
        c == 1 ? cout << "Yes" << endl : cout << "No" << endl;
    }
    else
        cout << "Yes" << endl;
    return 0;
}