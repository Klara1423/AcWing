#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int check(int l, int m, int a[])
{
    sort(a, a + l);
    for (int i = l - 1; i >= 0; i--)
    {
        if (m >= a[i])
        {
            if(i - 1 >= 0)
            {
                m -= a[i];
                i--;
            }
        }
        else return 0;
    }
    return 1;
}

int main()
{
    int n = 0, m = 0, a[10] = {0}, ans = 0;
    cin >> n >> m;
    
    for (int  i = 0; i < n; i++) cin >> a[i];

    for (int l = 0; l <= n; l++)
    {
        if(check(l, m, a) == 0)
        {
            ans = l - 1;
            break;
        }  
        cout << 
    }
    
    if (check(n, m, a) == 1) ans = n;
    cout << ans;
    return 0;
}