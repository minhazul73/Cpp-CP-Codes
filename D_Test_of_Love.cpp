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
        int n, m, k, L = 0, W = 0, C = 0, f = 0; 
        cin >> n >> m >> k;
        string s; s.pb('0');
        rep(1, n + 1)
        {
            char x; cin >> x; s.pb(x);
            if(s[i] == 'L') L++;
            else if(s[i] == 'W') W++;
            else C++;
        }
        s.pb('1');

        int pos = 0;
        if(m > n || L == n || (C == 0 && W <= k)) f = 1;
        else
        {
            rep(0, n + 2)
            {
                if(k < 0) {f = 0; break;}
                if(pos >= n + 1) {f = 1; break;}
                if(s[i + 1] == 'L') pos++;
                else if(s[i + 1] == 'W')
                {
                    if(m > 1 && s[i + m] == 'L') pos += m;
                    else if() 
                }
            }
        }
    }
}