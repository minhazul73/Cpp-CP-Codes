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

string toBinary(int b)
{
    string s;
    while(b)
    {
        s.pb((b % 2) + 48);
        b /= 2;
    }
    return s;
}

bool isPalindrome(int N)
{
    string s = toBinary(N);
    for(int i = 0; i < s.size() / 2; i++)
        if(s[i] != s[s.size() - 1 - i]) return false;
    return true;
}

int main()
{
    // testcase
    {
        int n; cin >> n;
        if(n % 2 == 1 && isPalindrome(n)) YES
        else NO
        // cout << toBinary(n);
    }
}