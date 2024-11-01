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
        int a, b, c, d, cnt = 0; cin >> a >> b >> c >> d;
        if(a > c) cnt++;
        if(a > d) cnt++;
        if(b > c) cnt++;
        if(b > d) cnt++;
        // if(c > a) cnt--;
        // if(c > b) cnt--;
        // if(d > a) cnt--;
        // if(d > b) cnt--;
        if(cnt < 0) cnt = 0;
        cout << cnt << endl;
    }
}