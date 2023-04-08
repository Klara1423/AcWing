#include <iostream>
using namespace std;

int main()
{
    int m = 0, sum = 0;
    cin >> m;

    for (int i = 0; ; )
    {
        int tmp = sum;
        while (tmp && tmp % 5 == 0)
        {
            tmp /= 5;
            i++;
        }

        if(i == m) break;
        else if (i > m)
        {
            cout << 0;
            return 0;
        }
        else sum += 5;
    }

    cout << 5 << endl;
    for (int i = sum; i < sum + 5; i++) cout << i << " ";

    return 0;
}