#include <iostream>
#include <algorithm>
#include <string>
#define N 100005
using namespace std;

int main()
{
    int n = 0, m = 0, hang[N] = {0}, lie[N] = {0}, a = 0, b = 0;
    cin >> n >> m;

    while (m--)
    {
        int x = 0, y = 0;
        cin >> x >> y;

        if (hang[x] == 0)
        {
            hang[x] = 1;
            a++;
        }
        if (lie[y] == 0)
        {
            lie[y] = 1;
            b++;
        }
        cout << (long long)(n - a) * (n - b) << " ";
    }
    return 0;
}