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
    testcase
    {
        double a, b, c; cin  >> a >> b >> c;
        string h;
        // int aa = a;

        // while(aa)
        // {
        //     if(aa % 16 < 10) h += '0' + aa % 16;
        //     else h += 'A' + aa % 16 - 10;
        //     aa /= 16;
        // }
        // cout << "0x";
        // for(int i = h.size() - 1; i >= 0; i--) cout << h[i];
        // cout << endl;

        cout << hex << left << showbase << nouppercase;
        cout << (ll)a << endl;

        // int cnt = 0, bb = b;
        // while(bb)
        // {
        //     bb /= 10;
        //     cnt++;
        // }
        // cnt += 3;
        // while (cnt--)
        // {
        //     cout << "_";
        // }
        // cout << fixed << setprecision(2) << (b < 0 ? '-' : '+') << b << endl;
        cout << dec << right << setw(15) << setfill('_') << showpos << fixed << setprecision(2);
        cout << b << endl;
        
        cout << scientific << uppercase << noshowpos << setprecision(9);
        cout << c << endl;

    }
}