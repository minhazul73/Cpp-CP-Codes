#include <bits/stdc++.h>
using namespace std;

#define rep(s, n) for(int i = s; i < n; i++)
#define rrep(e, n) for(int i = n - 1; i >= e; i--)
#define ll long long int
#define vi vector<int>
#define vll vector<ll>
#define vvi vector<vector<int>>
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
#define speed ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define testcase int t; cin >> t; while(t--)

int main()
{
    speed
    // testcase
    {
        vi x = {1, 2, 3, 4, 5};
        vi y = {1, 8, 27, 64, 125};
        int n = x.size();        
        vector<vector<int>> diff_table(n, vi(n, 0));
        
        rep(0, n) diff_table[i][0] = y[i];        
        rep(1, n) 
            for(int j = 0; j < n - i; j++) 
                diff_table[j][i] = diff_table[j + 1][i - 1] - diff_table[j][i - 1];
        rep(0, n) {
            for(int j = 0; j < n - i; j++) 
                cout << diff_table[i][j] << " ";
            cout << nl;
        }
    }
}
