#include <iostream>
#include <algorithm>
#include <string>
#define N 100005
using namespace std;

int main()
{
    int n = 0, m = 0;
    cin >> n >> m;
    int sum = n * n, a[N][N] = {0};

    while (m--)
    {
        int x = 0, y = 0;
        cin >> x >> y;
        for (int i = 1; i <= n; i++)
        {
            if(a[x][i] == 0)
            {
                a[x][i] = 1;
                sum--;
            }
            if(a[i][y] == 0)
            {
                a[i][y] = 1;
                sum--;
            }
        }
        cout << sum << " ";
    }
    return 0;
}