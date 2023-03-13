#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    int x = 0, ans = 0;
    cin >> x;
    ans = (x % 5 == 0) ? x / 5 : x / 5 + 1;
    cout << ans;
    return 0;
}