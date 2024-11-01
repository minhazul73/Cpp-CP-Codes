#include <bits/stdc++.h>
using namespace std;

#define rep(s, n) for (int i = s; i < n; i++)
#define rrep(e, n) for (int i = n - 1; i >= e; i--)
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define asort(a) sort(a, a + n)
#define vsort(v) sort(all(v))
#define print(a) cout << a[i] << " ";
#define YES cout << "YES" << endl;
#define NO cout << "NO" << endl;
#define ll long long int
#define testcase int t; cin >> t; while (t--)

int fib(int n)
{
    if(n == 1) return 0;
    else if(n == 2) return 1;
    else
        return fib(n - 1) + fib(n - 2);   
}
int recFib(int n)
{
    int f[n + 2];
        f[1] = 0;
        f[2] = 1;
        for (int i = 3; i <= n; i++) 
            f[i] = f[i - 1] + f[i - 2];
        return f[n];
}

int main()
{
        int n; cin >> n;
        cout << "Recursive: " << recFib(n) << endl;
        cout << "NonRecursive: " << fib(n) << endl;
}
