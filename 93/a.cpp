#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    int n = 0, k = 0, ans = 0;
    cin >> n >> k;

    if ((n + 1) % k == 0) ans = n + 1;
    else  ans = (n / k + 1) * k;
]
    cout << ans;
    return 0;
}