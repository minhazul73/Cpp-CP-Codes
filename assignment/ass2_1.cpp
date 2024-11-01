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
    testcase
    {
        int n, a[50], b[50];
        cin >> n;
        int mx = 0, r;
        for(int i = 0; i < n; i++)
        {
            cin >> a[i] >> b[i];
            if(a[i] <= 10 && mx < b[i])
            {
                mx = b[i];
                r = i;
            }
        }
        cout << r + 1 << endl;
    }
}