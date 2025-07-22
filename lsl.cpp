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
        int n = 5;
        double x[] = {-2, -1, 0, 1, 2};
        double y[] = {1, 2, 3, 4, 5};

        double sumX = 0, sumY = 0, sumXY = 0, sumX2 = 0;

        for (int i = 0; i < n; i++) {
            sumX += x[i];
            sumY += y[i];
            sumXY += x[i] * y[i];
            sumX2 += x[i] * x[i];
        }

        double b = (n * sumXY - sumX * sumY) / (n * sumX2 - sumX * sumX);
        double a = (sumY - b * sumX) / n;

        cout << "Least square line is: y = " << fixed << setprecision(4) << a 
             << " + " << b << "x" << nl;
    }
}
