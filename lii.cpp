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
        double y_val = 85;
        double x_arr[] = {1, 2, 3, 4, 5};
        double y_arr[] = {1, 8, 27, 64, 125};
        double result = 0;

        for (int i = 0; i < n; i++) 
        {
            double term = 1;
            for (int j = 0; j < n; j++) 
            {
                if (j != i)
                    term *= (y_val - y_arr[j]) / (y_arr[i] - y_arr[j]);
            }
            result += x_arr[i] * term;
        }

        cout << "Estimated x for f(x) = " << y_val << " is " 
             << fixed << setprecision(6) << result << nl;
    }
}
