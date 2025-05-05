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
        int x[] = {1, 2, 3, 4, 5};
        int y[n][n];

        y[0][0] = 1;
        y[1][0] = 8;
        y[2][0] = 27;
        y[3][0] = 64;
        y[4][0] = 125;

        for (int j = 1; j < n; j++) 
            for (int i = 0; i < n - j; i++) 
                y[i][j] = y[i + 1][j - 1] - y[i][j - 1];

        cout << "Forward Difference Table:\n";
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n - i; j++) 
                cout << setw(5) << y[i][j] << " ";
            
            cout << endl;
        }
    }
}
