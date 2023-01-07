#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    string str;
    cin >> str;
    
    int k = 0, max = 0, w[26] = {0}, ans = 0;
    cin >> k;
    
    for (int i = 0; i < 26; i++) 
    {
        cin >> w[i];
        max = max > w[i] ? max : w[i]; 
    }

    for (int i = 1; i <= str.size(); i++)
    {
        ans +=  i * w[str[i - 1] - 'a'];
    }

    ans += (k * str.size() + (k * k + k) / 2) * max;
    cout << ans;

    return 0;
}