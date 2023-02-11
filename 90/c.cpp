#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    int n = 0, k = 0;
    string str, ans;
    cin >> n >> k >> str;
    ans += str;

    int pos = 0;
    for (int i = 0; i < n; i++)
        if (str.substr(0, i) == str.substr(n - i, i))
            pos = i;

    for (int i = 1; i < k; i++)
        ans += str.substr(pos);

    cout << ans;
    return 0;
}