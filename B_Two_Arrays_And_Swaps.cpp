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
        int n, k, sum = 0, cnt = 0;
        cin >> n >> k;
        vi a(n), b(n);
        rep(0, n) cin >> a[i];
        rep(0, n) cin >> b[i];
        vsort(a); vsort(b);

        rep(0, n)
        {
            if(cnt != k && a[i] < b[n - 1 - i])
            { 
                swap(a[i], b[n - 1 - i]);
                cnt++;
            }
            sum += a[i];
        }
        cout << sum << endl;
    }
}