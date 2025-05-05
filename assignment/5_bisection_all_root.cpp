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
    return pow(x, 3) - 6 * x + 4;
}

double bisection(double a, double b, double eps) {
    double mid;
    while (b - a >= eps) {
        mid = (a + b) / 2;
        if (f(mid) == 0.0) break;
        else if (f(mid) * f(a) < 0) b = mid;
        else a = mid;
    }
    return mid;
}

int main()
{
    speed
    // testcase
    {
        double eps = 0.001;
        vi intervals = {-3, -1, 1, 3};
        rep(0, intervals.size() - 1) {
            if (f(intervals[i]) * f(intervals[i + 1]) < 0) 
                cout << fixed << setprecision(3) << bisection(intervals[i], intervals[i + 1], eps) << nl;
        }
    }
}
