#include <bits/stdc++.h>
using namespace std;

#define rep(s, n) for(int i = s; i < n; i++)
#define rrep(e, n) for(int i = n - 1; i >= e; i--)
#define vi vector<int>
#define pb push_back
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define asort(a) sort(a, a + n)
#define vsort(v) sort(all(v))
#define YES cout << "YES" << endl;
#define NO cout << "NO" << endl;
#define ll long long int
#define testcase int t; cin >> t; while(t--)

int main()
{
    //testcase
    {
        int n, q; cin >> n >> q;
        vector<int> v; ll f[n + 1] = {};
        v.pb(0);
        rep(0, n) {int x; cin >> x; v.pb(x);}
        sort(v.begin() + 1, v.end());
        reverse(v.begin() + 1, v.end());
        rep(1, n+1) f[i] = f[i - 1] + v[i];
        rep(0, q)
        {
            int x, y; cin >> x >> y;
            cout << f[x] - f[x-y] << endl; 
        }
    }
}