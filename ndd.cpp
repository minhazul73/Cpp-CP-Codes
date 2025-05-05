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
        double x_val = 2.7;
        double x_arr[] = {1, 3, 4, 6, 10};
        double dd[5][5];

        for (int i = 0; i < n; i++)
            dd[i][0] = (i==0? 0 : i==1? 18 : i==2? 58 : i==3? 190 : 920);

        for (int j = 1; j < n; j++)
            for (int i = 0; i < n - j; i++)
                dd[i][j] = (dd[i+1][j-1] - dd[i][j-1]) / (x_arr[i+j] - x_arr[i]);

        double result = dd[0][0];
        for (int j = 1; j < n; j++) 
        {
            double term = 1;
            for (int k = 0; k < j; k++)
                term *= (x_val - x_arr[k]);
            result += term * dd[0][j];
        }

        cout << "Estimated y at x = " << x_val << " is " << fixed << setprecision(6) << result << nl;
    }
}
