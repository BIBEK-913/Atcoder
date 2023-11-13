#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int n, x, sum = 0, req, i, a, b;
    cin >> n >> x;
    vector<int> arr(n - 1);
    for (i = 0; i < n - 1; i++)
    {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    for (i = 1; i < n - 2; i++)
    {
        sum += arr[i];
    }
    req = x - sum;
    if (req <= 0)
        cout << "0" << endl;
    else
    {
        a = arr[0];
        b = arr[n - 2];
        if (a == b)
        {
            if (req <= a)
                cout << "0" << endl;
            else
                cout << "-1" << endl;
        }
        else
        {
            if (req <= a)
                cout << "0" << endl;
            else if (req > a && req <= b)
                cout << req << endl;
            else if (req > b)
                cout << "-1" << endl;
        }
    }
    return 0;
}