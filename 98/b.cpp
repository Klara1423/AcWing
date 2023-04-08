#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n = 0, idx = 0;
    string ans;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string tmp;
        cin >> tmp;
        if (tmp == "0")
        {
            cout << 0;
            return 0;
        }
        else if(tmp.find('1') == 0 && tmp.find('2') == -1 && tmp.find('3') == -1 && tmp.find('4') == -1 && tmp.find('5') == -1 && tmp.find('6') == -1 && tmp.find('7') == -1 && tmp.find('8') == -1 && tmp.find('9') == -1 && tmp.find('1',tmp.find('1') + 1) == -1)
        {
            idx += tmp.size() - 1; 
        }
        else ans = tmp;
    }

    if(ans.size() == 0) ans = "1";
    cout << ans;
    while (idx--) cout << 0;

    return 0;
}