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
        ll n, k; cin >> n >> k;
        ll a[k]; rep(0, k) cin >> a[i];
        sort(a, a + k);

        int ones = 0;
        rep(0, k - 1)
        {
            if(a[i] > 1) ones += (a[i] - 1);
        }
        cout << k - 1 + (ones * 2) << endl;
    }
}