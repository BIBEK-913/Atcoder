#include <iostream>
using namespace std;
int main()
{
    int x, rem, ctz = 0;
    cin >> x;
    while (x > 1)
    {
        rem = x % 2;
        if (rem)
            break;
        else
        {
            ctz++;
            x /= 2;
        }
    }
    cout << ctz << endl;
    return 0;
}