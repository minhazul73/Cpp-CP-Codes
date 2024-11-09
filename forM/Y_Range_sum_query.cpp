#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, n, q, a, b;
    cin >> n;
    long long int ar[n], pf[n*10] = {};
    for(i = 1; i <= n; i++)
    {
        cin >> ar[i];
        pf[i] = pf[i - 1] + ar[i];
        // cout << pf[i] << " ";
    }
    // cout << endl;
    cin >> q;
    while(q--)
    {
        cin >> a >> b;
        long long int sum = 0;
        sum = pf[b] - pf[a - 1];
        cout << sum << endl; 
    }
}