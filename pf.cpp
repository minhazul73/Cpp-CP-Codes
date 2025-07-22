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
        int n = 4;
        double x[] = {2, 10, 26, 61};
        double y[] = {600, 500, 400, 350};

        double sumX = 0, sumY = 0, sumXY = 0, sumX2 = 0;

        for (int i = 0; i < n; i++) {
            double logY = log(y[i]);
            sumX += x[i];
            sumY += logY;
            sumXY += x[i] * logY;
            sumX2 += x[i] * x[i];
        }

        double b = (n * sumXY - sumX * sumY) / (n * sumX2 - sumX * sumX);
        double A = (sumY - b * sumX) / n;
        double a = exp(A);

        cout << "Best fit for y = ae^(bx):" << nl;
        cout << "a = " << fixed << setprecision(6) << a << nl;
        cout << "b = " << fixed << setprecision(6) << b << nl;
        cout << "Final equation: y = " << a << " * e^(" << b << "x)" << nl;
    }
}
