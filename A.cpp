#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t, sz, n, i, x, tc, j, arr[1000];
    cin >> t;
    for (tc = 1; tc <= t; tc++)
    {
        cin >> n;
        for (i = 0; i < n; i++)
            cin >> arr[i];

        for (sz = 1; sz <= n; sz++)
        {
            for (x = 0; x <= n - sz; x++)
            {
                int mx = -200000;
                for (i = x; i < x + sz; i++)
                {
                    if (arr[i] > arr[i+1])
                        cnt 
                }
                cout << mx;
                cout << " ";
            }
        }
        cout << endl;
    }
}