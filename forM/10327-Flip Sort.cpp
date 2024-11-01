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
        int n;
        while (cin >> n)
        {
            vector<int> v(n);
            rep(0, n) cin >> v[i];
            
            int cost = 0;
            rep(0, n)
                for (int j = i + 1; j < n; ++j)
                    if (v[i] > v[j]) ++cost;
            
            cout << "Minimum exchange operations : " << cost << "\n";
        }
    }
}
