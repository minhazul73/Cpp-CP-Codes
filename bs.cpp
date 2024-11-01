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

bool b_s(vi v, int x)
{
    bool f = false;
    int m, l = 0, r = v.size() - 1;
    while(l <= r)
    {
        m = (l + r)/2;
        if(v[m] == x) {f = true; break;}
        else if(v[m] > x) r = m - 1;
        else l = m + 1;
    }
    return f;
}

int main()
{
    vi v = {34, 43, 54, 23, 76, 40};
    vsort(v);
    bool f = b_s(v, 45);
    bool g = binary_search(v.begin(), v.end(), 43);
    if(f) cout << "paisi\n";
    else cout << "schema ka\n";
}