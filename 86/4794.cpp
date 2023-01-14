#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    int n = 0, a[25] = {0}, t[3] = {0};
    cin >> n;

    for (int i = 0; i < n; i++) 
    {
        cin >> a[i];

        int b = i % 3;
        if(b == 0) t[0] += a[i];
        else if (b == 1) t[1] += a[i];
        else t[2] += a[i];
    }

    if(t[0] > t[1] && t[0] > t[2]) cout << "chest" << endl;
    else if(t[1] > t[0] && t[1] > t[2]) cout << "biceps" << endl;
    else if(t[2] > t[1] && t[2] > t[0]) cout << "back" << endl;
    


    return 0;
}