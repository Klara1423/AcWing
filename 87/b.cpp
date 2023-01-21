#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    int n = 0, m = 0, a[10] = {0}, ans = 0;
    cin >> n >> m;
    
    for (int  i = 0; i < n; i++) cin >> a[i];

    for (int i = 0; i < n - 1 ; i++)
    {
        if (m >= a[i])
        {
            if(m >= a[i + 1])
            {
                ans += 2;
                m -= max(a[i], a[i + 1]);
                i++;
            }
            else
            {
                ans ++;
                m -= a[i];

            }
        }

        else break;
    }
    cout << ans;
    return 0;
}