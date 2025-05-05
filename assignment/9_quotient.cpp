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

int main()
{
    speed
    // testcase
    {
        vi coeffs = {1, -5, 10, -8}, quotient(3);
        int x = 2, n = coeffs.size() - 1;

        quotient[0] = coeffs[0];
        rep(1, n) quotient[i] = quotient[i - 1] * x + coeffs[i];

        rep(0, n) cout << quotient[i] << " ";
        cout << nl;
    }
}
