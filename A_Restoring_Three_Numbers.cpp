#include <bits/stdc++.h>
using namespace std;

#define rep(s, n) for(int i = s; i < n; i++)
#define rrep(e, n) for(int i = n - 1; i >= e; i--)
#define vi vector<int>
#define pb push_back
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define asort(a) sort(a, a + n)
#define vsort(v) sort(all(v))
#define YES cout << "YES" << endl;
#define NO cout << "NO" << endl;
#define ll long long int
#define testcase int t; cin >> t; while(t--)

int main()
{
    //testcase
    {
        int n = 4, x[n], a, b, c; 
        cin >> x[0] >> x[1] >> x[2] >> x[3];
        asort(x);
        a = x[3] - x[2];
        b = x[0] - x[3] + x[2];
        c = x[1] - x[3] + x[2];
        cout << a << " " << b << " " << c;
    }
}