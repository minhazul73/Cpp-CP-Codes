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
    //testcase
    {
        int n, m;
        cin >> n >> m;
        char a[101][101];

        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= m; j++)
                cin >> a[i][j];

        int x, y;
        cin >> x >> y;
        if (
            a[x][y - 1] != '.' &&
            a[x][y + 1] != '.' &&

            a[x - 1][y - 1] != '.' &&
            a[x - 1][y] != '.' &&
            a[x - 1][y + 1] != '.' &&

            a[x + 1][y - 1] != '.' &&
            a[x + 1][y] != '.' &&
            a[x + 1][y + 1] != '.'

        ) cout << "yes";
        else cout << "no";
    }
}
