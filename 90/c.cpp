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

    if(str[0] == str[n - 1])
        for (int i = 1; i < k; i++)
            ans += str.substr(1);
    else
        for (int i = 1; i < k; i++)
            ans += str;

    int pos = 0, num = 0;
    for (int i = 0; i < ans.size(); i++)
    {
        if (ans.find(str, pos)!= -1)
        {
            num++;
            if(num == k)
                break;
            pos = ans.find(str, pos + 1);
        }
    }
    ans.erase(pos + n, ans.size());

    cout << ans;
    return 0;
}