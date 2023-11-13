#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
    int n, i, c = 0;
    cin >> n;
    string s(n, ' ');
    // creates string of length n, each character initialized to " "(space)
    for (i = 0; i < n; i++)
    {
        cin >> s[i];
        if (i >= 2 && c == 0 && s[i] == 'C' && s[i - 1] == 'B' && s[i - 2] == 'A')
        // checking from C to avoid out of bounds error
        {
            cout << i - 2 + 1 << endl;
            c++;
        }
    }
    if (c == 0)
        cout << "-1" << endl;
    return 0;
}