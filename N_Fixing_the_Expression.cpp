#include <bits/stdc++.h>
using namespace std;

#define rep(s, n) for(int i = s; i < n; i++)
#define rrep(e, n) for(int i = n - 1; i >= e; i--)
#define vi vector<int>
#define vvi vector<<vector<int>>
#define mpii map<int, int>
#define mpis map<int, string>
#define pb push_back
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define asort(a) sort(a, a + n)
#define vsort(v) sort(all(v))
#define YES cout << "YES" << endl;
#define NO cout << "NO" << endl;
#define nl endl
#define ll long long int
#define speed ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define testcase int t; cin >> t; while(t--)

int main()
{
    speed
    testcase
    {
        string s; cin >> s;
        int a = s[0] - '0';
        int b = s[2] - '0';
        
        if(s[1] == '<')
            if(a < b) cout << s << endl;
            else if(a > b) cout << a << '>' << b << endl;
            else cout << a << '=' << b << endl;

        else if(s[1] == '>')
            if(a > b) cout << s << endl;
            else if(a < b) cout << a << '<' << b << endl;
            else cout << a << '=' << b << endl;

        else
            if(a == b) cout << s << endl;
            else if(a < b) cout << a << '<' << b << endl;
            else cout << a << '>' << b << endl;
    }    
}

