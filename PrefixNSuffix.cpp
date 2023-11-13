#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
    int n, m, i;
    string s, t;
    cin >> n >> m;
    cin >> s;
    cin >> t;
    string s1(t.begin(), t.begin() + n);
    string s2(t.end() - n, t.end());
    if (s1 == s2 && s1 == s)
        cout << '0' << endl;
    else if (s1 == s)
        cout << '1' << endl;
    else if (s2 == s)
        cout << '2' << endl;
    else
        cout << '3' << endl;
    return 0;
}