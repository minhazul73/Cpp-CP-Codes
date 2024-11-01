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

int fibDP(int n, int a[])
{
    if(a[n] != -1) return a[n];
    if(n == 1) return 0;
    else if(n == 2) return 1;
    return a[n] = fibDP(n - 1, a) + fibDP(n - 2, a); 
}

int main()
{
    int n = 5, a[n + 1];
    memset(a, -1, sizeof(a));
    cout << fibDP(n, a);
}