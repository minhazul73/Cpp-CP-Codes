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
        int n, m, f = 0; cin >> n >> m;
        vector<vector<char>> c(n, vector<char>(m));

        rep(0, n) {
            for(int j = 0; j < m; j++)
            {
                cin >> c[i][j];
                if(c[i][j] == 'C' || c[i][j] == 'M' || c[i][j] == 'Y') {
                    f = 1;
                    break;
                }
            }
        }

        if(f) cout << "#Color";
        else cout << "#Black&White";
    }
}