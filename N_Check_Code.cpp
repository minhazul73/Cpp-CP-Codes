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
#define YES cout << "Yes" << endl;
#define NO cout << "No" << endl;
#define ll long long int
#define testcase int t; cin >> t; while(t--)

int main()
{
    //testcase
    {
        int a, b; cin >> a >> b;
        string s; cin >> s;
        if(s[a] != '-') {NO return 0;}
        rep(0, s.length()) {
            if(i == a) continue;
            if(s[i] > '9' || s[i] < '0') {NO return 0;} 
        }
        YES
    }
}