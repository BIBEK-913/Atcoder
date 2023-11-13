#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    long long a, b;
    cin >> a >> b;
    long long c = pow(a, b) + pow(b, a);
    cout << c << endl;
    return 0;
}