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
        double x[] = {2, 4, 6, 8};
        double y[] = {1.4, 2.0, 2.4, 2.8};

        double sumX = 0, sumX2 = 0, sumX3 = 0, sumX4 = 0;
        double sumY = 0, sumXY = 0, sumX2Y = 0;

        for (int i = 0; i < n; i++) {
            double xi = x[i], yi = y[i];
            double xi2 = xi * xi;
            double xi3 = xi2 * xi;
            double xi4 = xi3 * xi;

            sumX += xi;
            sumX2 += xi2;
            sumX3 += xi3;
            sumX4 += xi4;
            sumY += yi;
            sumXY += xi * yi;
            sumX2Y += xi2 * yi;
        }

        double A[3][4] = {
            {n,      sumX,   sumX2,  sumY},
            {sumX,  sumX2,  sumX3,  sumXY},
            {sumX2, sumX3,  sumX4,  sumX2Y}
        };

        for (int i = 0; i < 3; i++) {
            for (int j = i + 1; j < 3; j++) {
                double ratio = A[j][i] / A[i][i];
                for (int k = 0; k < 4; k++)
                    A[j][k] -= ratio * A[i][k];
            }
        }

        double c = A[2][3] / A[2][2]; // c = (sumX2Y - ...) / (sumX4 - ...)
        double b = (A[1][3] - A[1][2] * c) / A[1][1]; // b = (sumXY - sumX3 * c) / (sumX2 - ...)
        double a = (A[0][3] - A[0][1] * b - A[0][2] * c) / A[0][0]; // a = (sumY - sumX * b - sumX2 * c) / n

        cout << "Least square parabola is: y = " << fixed << setprecision(6)
             << a << " + " << b << "x + " << c << "x^2" << nl;
    }
}

