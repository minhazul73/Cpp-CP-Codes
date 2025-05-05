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

vector<double> deflate_poly(double root, vector<double> coeffs) {
    int n = coeffs.size() - 1;
    vector<double> quotient(n);
    quotient[0] = coeffs[0];
    rep(1, n) quotient[i] = quotient[i - 1] * root + coeffs[i];
    return quotient;
}

int main()
{
    speed
    // testcase
    {
        double eps = 0.001;
        vi initial_guesses = {-2, 1, 3};
        vector<double> coeffs = {1, 0, -6, 4};

        rep(0, 2) {
            double root = newton_raphson(initial_guesses[i], eps);
            cout << fixed << setprecision(3) << root << nl;
            coeffs = deflate_poly(root, coeffs);
        }
        cout << fixed << setprecision(3) << -coeffs[1] / coeffs[0] << nl;
    }
}
