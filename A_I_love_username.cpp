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
        int n, cnt = 0; cin >> n; 
        int a[n]; rep(0, n) cin >> a[i];
        int mn = a[0], mx = a[0];
        if(n == 1) {cout << cnt; return 0;}
        rep(1, n)
        {
            if(a[i] < mn || a[i] > mx)
            {
                cnt++;
                mn = min(a[i], mn);
                mx = max(a[i], mx);
            }
        }
        cout << cnt;
    }
}