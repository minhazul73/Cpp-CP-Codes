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
        int n; cin >> n;
        vi v(n);
        rep(0, n) cin >> v[i];

        int k = n - 2;
        vector<pair<int, int>> divisors;
        for(int i = 1; i * i <= k; i++)
            if(k % i == 0) divisors.pb({i, k / i});

        pair<int, int> ans;
        for (auto &div : divisors) {
            int a = div.first;
            int b = div.second;
            bool found_a = false, found_b = false;
            int found_i;
            for (int i = 0; i < v.size(); i++) {
                if(!found_a)
                    if (v[i] == a) {found_a = true; found_i = i;} 
                if (v[i] == b && i != found_i) found_b = true;
                if (found_a && found_b) {
                    ans = {a, b};
                    break;
                }
            }
        }

        cout << ans.first << " " << ans.second << endl;
    }    
}

