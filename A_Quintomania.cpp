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
#define nl endl
#define ll long long int
#define testcase int t; cin >> t; while(t--)

int main()
{
    testcase
    {
        int f = 1, n; cin >> n;
        int a[n];
        rep(0, n) cin >> a[i];

        rep(0, n - 1)
            if(abs(a[i] - a[i + 1]) != 7 && abs(a[i] - a[i + 1]) != 5)
                { f = 0; break; }
        if(f) YES
        else NO
    }
}