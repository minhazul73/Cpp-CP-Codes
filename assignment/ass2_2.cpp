#include <bits/stdc++.h>
using namespace std;

#define rep(s, n) for(int i = s; i < n; i++)
#define rrep(e, n) for(int i = n - 1; i >= e; i--)
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define asort(a) sort(a, a + n)
#define vsort(v) sort(all(v))
#define YES cout << "YES" << endl;
#define NO cout << "NO" << endl;
#define nl endl
#define ll long long int
#define testcase int t; cin >> t; while(t--)

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int b, c, h; cin >> b >> c >> h;
        if(c + h + 1 <= b) cout << (c + h) * 2 + 1 << nl;
        else if(b <= 2) cout << b + 1 << nl;
        else cout << b + b - 1 << nl;
    }
}