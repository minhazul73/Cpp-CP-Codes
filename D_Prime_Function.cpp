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

bool isPrime(int N)
{
    if (N <= 1) return false;
    if (N <= 3) return true;
    if (N % 2 == 0 || N % 3 == 0) return false;

    for (int i = 5; i * i <= N; i += 6)
        if (N % i == 0 || N % (i + 2) == 0) return false;

    return true;
}

int main()
{
    testcase
    {
        int n; cin >> n;
        if(isPrime(n)) YES
        else NO
    }
}