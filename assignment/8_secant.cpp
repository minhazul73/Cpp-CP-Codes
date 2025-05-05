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

double f(double x) {
    return pow(x, 3) - 5 * pow(x, 2) - 29;
}

double secant(double x0, double x1, double eps) {
    double x2;
    while (abs(x1 - x0) >= eps) {
        x2 = x1 - (f(x1) * (x1 - x0)) / (f(x1) - f(x0));
        x0 = x1;
        x1 = x2;
    }
    return x2;
}

int main()
{
    speed
    // testcase
    {
        double eps = 0.001;
        double x0 = 5, x1 = 6;
        cout << fixed << setprecision(3) << secant(x0, x1, eps) << nl;
    }
}
