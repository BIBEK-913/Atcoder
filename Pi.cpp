#include <iostream>
#include <string>
using namespace std;
int main()
{
    string pi = "3.1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679";
    int n;
    cin >> n;
    string t = string(pi.begin(), pi.begin() + 2 + n);
    cout << t << endl;
    return 0;
}