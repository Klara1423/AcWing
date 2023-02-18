#include <iostream>
#include <algorithm>
#include <string>
#define N 100005
using namespace std;

int main()
{
    int n = 0, m = 0, ans[N] = {0};
    cin >> n >> m;

    for (int i = 0; i < m; i++)
    {
        int a = 0, b = 0;
        cin >> a >> b;
        for (int j = a - 1; j < b; j++)
            ans[j]++;
    }

    for (int i = 0; i < n; i++)
    {
        if (ans[i] == 0 || ans[i] > 1)
        {
            cout << i + 1 << " " << ans[i];
            return 0;
        }
    }

    cout << "OK";
    return 0;
}