#include <bits/stdc++.h>
using namespace std;

#define rep(s, n) for(int i = s; i < n; i++)
#define rrep(e, n) for(int i = n - 1; i >= e; i--)
#define vi vector<int>
#define vvi vector<vector<int>>
#define mpii map<int, int>
#define mpis map<int, string>
#define pb push_back
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define asort(a) sort(a, a + n)
#define vsort(v) sort(all(v))
#define YES cout << "YES" << endl;
#define NO cout << "NO" << endl;
#define nl endl
#define ll long long int
#define speed ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define testcase int t; cin >> t; while(t--)

int main()
{
    speed
    int n; cin >> n;
    vi a(n), b(n), c(n); 
    rep(0, n) cin >> a[i];
    rep(0, n) cin >> b[i];
    rep(0, n) cin >> c[i];
    ll total_score = 0;

    rep(0, n)
    {
        int t, s;
        cin >> t >> s;

        if (s > 0) 
        {
            int score = max(c[i], a[i] - b[i] * t - 50 * (s - 1));
            total_score += score;
        }
        else total_score += 0;
    }
    cout << total_score << nl;
}