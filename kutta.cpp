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

int main()
{
    speed;
    // testcase
    {
        double x = 0, y = 1;
        double h = 0.1;
        int steps = 2;

        for (int i = 0; i < steps; i++) {
            double k1 = h * (x + y);
            double k2 = h * (x + h / 2 + y + k1 / 2);
            double k3 = h * (x + h / 2 + y + k2 / 2);
            double k4 = h * (x + h + y + k3);

            double deltaY = (k1 + 2 * k2 + 2 * k3 + k4) / 6;
            y = y + deltaY;
            x = x + h;

            cout << "y(" << fixed << setprecision(1) << x << ") = " 
                 << fixed << setprecision(6) << y << nl;
        }
    }
}
