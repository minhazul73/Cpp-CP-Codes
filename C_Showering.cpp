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
    testcase
    {
        ll n, s, t, f = 0; cin >> n >> s >> t;
        int l[n], r[n];
        rep(0, n)
        {
            cin >> l[i] >> r[i];
            if(i > 0 && l[i] - r[i - 1] >= s) {f = 1; break;}
        }
        if(f || l[0] >= s || t - r[n - 1] >= s) YES
        else NO
    }
}