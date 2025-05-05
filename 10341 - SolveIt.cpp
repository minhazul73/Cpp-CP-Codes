#include <bits/stdc++.h>
using namespace std;

#define rep(s, n) for (int i = s; i < n; i++)
#define rrep(e, n) for (int i = n - 1; i >= e; i--)
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

double p, q, r, s, t, u;

double F(double x)
{
    return p * exp(-x) + q * sin(x) + r * cos(x) + s * tan(x) + t * x * x + u;
}

int main()
{
    // testcase
    {    
        while (cin >> p >> q >> r >> s >> t >> u)
        {
            if (F(0) * F(1) > 0)
            {
                cout << "No solution\n";
                continue;
            }
            
            double low = 0, high = 1, mid, result;
            rep(0, 100)
            {
                mid = (low + high) / 2;
                result = F(mid);

                if (F(mid) <= 0) high = mid;
                else low = mid;
            }
            cout << setprecision(4) << fixed << mid << endl;
        }
    }    
}