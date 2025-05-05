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

double df(double x) {
    return 3 * pow(x, 2) - 6;
}

double newton_raphson(double x0, double eps) {
    double x1;
    while (true) {
        x1 = x0 - f(x0) / df(x0);
        if (abs(x1 - x0) < eps) break;
        x0 = x1;
    }
    return x1;
}

int main()
{
    speed
    // testcase
    {
        double eps = 0.001;
        vi initial_guesses = {-2, 1, 3};
        rep(0, initial_guesses.size()) cout << fixed << setprecision(3) << newton_raphson(initial_guesses[i], eps) << nl;
    }
}
