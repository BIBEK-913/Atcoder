#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int n, i, left, right, mid;
    cin >> n;
    vector<int> a(n);
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    left = 0;
    right = n - 1;
    mid = (left + right) / 2;
    while (!(a[mid + 1] == a[n - 1] && a[mid] != a[n - 1]))
    // loop stops when condition inside bracket is true,cuz ! makes it false
    {
        if (a[mid] < a[n - 1]) // goto right
            left = mid;
        if (a[mid] == a[n - 1]) // goto left
            right = mid;
        mid = (left + right) / 2;
    }
    cout << a[mid] << endl;
    return 0;
}