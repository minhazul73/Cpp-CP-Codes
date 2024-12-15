#include <bits/stdc++.h>
using namespace std;

#define rep(s, n) for(int i = s; i < n; i++)
#define rrep(e, n) for(int i = n - 1; i >= e; i--)
#define vi vector<int>
#define vvi vector<<vector<int>>
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
    testcase
    {
        int m, a, b, c; cin >> m >> a >> b >> c;
        int total_seat = m * 2, set = 0;

        if(a <= m) set += a;
        else set += m;

        if(b <= m) set += b;
        else set += m;

        if(total_seat - set >= c) set += c;
        else set += (total_seat - set);

        cout << set << endl;

    }    
}

