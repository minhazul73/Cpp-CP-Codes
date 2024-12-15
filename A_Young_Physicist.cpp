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
    //testcase
    {
        int n; cin >> n;
        int x = 0, y = 0, z = 0;
        int a, b, c; 
        rep(0, n)
        {
            cin >> a >> b >> c;
            x += a;
            y += b;
            z += c;
        }
        if(x == 0 && y == 0 && z == 0) cout << "YES" << endl;
        else cout << "NO" << endl;
    }    
}

