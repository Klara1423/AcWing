#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
using namespace std;

int main()
{
    int t = 0;
    cin >> t;

    while (t--)
    {
        int n = 0, j = 0, a[6] = {0};
        cin >> n;
    
        for (int i = 0; n; i++)
        {
            if(n % 10 != 0)
            {
                a[j++] = (n % 10) * pow(10,i);
            } 
            n /= 10;
        }
        
        cout << j << endl;
        for (int i = 0; i < j; i++)
        {
            cout << a[i] << " ";
        }cout << endl;
        
        
    }
    return 0;
}