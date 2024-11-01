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
    testcase
    {
        int n, mx = 0, mid; cin >> n;
        unordered_map<int, int> fr;
        int a[n]; rep(0, n) 
        {
            cin >> a[i];
            fr[a[i]]++;
        }

        for(auto it : fr) mx = max(mx, it.second);

        if(n % 2 != 0) mid = n / 2 + 1;
        else mid = n / 2;

        if(n == 1 || mx == n) cout << 0 << endl;
        else if(mx >= mid) cout << n - mx + 1 << endl;
        else cout << n - mx + 2 << endl;


    }
}