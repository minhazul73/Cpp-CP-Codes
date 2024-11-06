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
#define nl endl
#define ll long long int
#define testcase int t; cin >> t; while(t--)

int main()
{
    testcase
    {
        int n, k; cin >> n >> k;
        map<int, int> mp;

        rep(0, k)
        {
            int b, c; cin >> b >> c;
            mp[b] += c;
        }
        int sum = 0;
        for(auto& i : mp) 
        {
            n--;
            sum += i.second;
            if(n == 0) break; 
        }
        cout << sum << endl;
    }
}