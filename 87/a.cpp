#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    int a[5][5] = {0}, ans = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> a[i][j];
            if(a[i][j] == 1) ans = abs(i - 2) + abs(j -2);
        }
    }
    cout << ans;
    return 0;
}