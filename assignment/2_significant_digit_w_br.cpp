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
        double num;
        int sig;
        cin >> num >> sig;
        
        if (num == 0)  cout << 0 << nl;
        else 
        {    
            int order = floor(log10(abs(num)));
            double scale = pow(10, sig - order - 1);
            num = round(num * scale) / scale;
            cout << fixed << setprecision(sig - max(order + 1, 0)) << num << nl;
        }
    }
}
