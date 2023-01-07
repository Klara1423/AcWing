#include <iostream>
#include <algorithm>
#include <string>

using namespace std;
int main()
{
    int n = 0, t = 0, x = 0, y= 0, a[2][2] = {0}; 
    cin >> n; 
    
    for (int i = 0; i < n; i++)
    {
        cin >> t >> x >> y;
        a[t - 1][0] += x;
        a[t - 1][1] += y;
    }

    if (a[0][0] >= a[0][1]) cout << "LIVE" << endl;
    else cout << "DEAD" << endl;

    if (a[1][0] >= a[1][1]) cout << "LIVE" << endl;
    else cout << "DEAD" << endl;

    return 0;
}