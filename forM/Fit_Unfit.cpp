#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, mx = 0; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) 
    {
        cin >> a[i];
        if(i) mx = max(mx, a[i] - a[i - 1]);
    }
    if(mx) cout << mx;
    else cout << "UNFIT";
}