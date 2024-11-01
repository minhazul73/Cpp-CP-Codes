#include <bits/stdc++.h>
using namespace std;

#define rep(s, n) for(int i = s; i < n; i++)
#define rrep(e, n) for(int i = n - 1; i >= e; i--)
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
    int t; cin >> t; while(t--)
    {
        int n, a[300], o[3], e[2], odd = 0, even = 0;
        cin >> n;
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
            if((a[i] % 2 != 0) && odd <= 3)
            {
                o[odd] = i; odd++; 
                //cout << "oddDhuktese\n";
            }
            else if((a[i] % 2 == 0) && even <= 2)
            {
                e[even] = i; even++;
                //cout << "evenDhuktese\n";
            }
        }
        cout << "odd = " << odd << ", even = " << even << endl;
        if(odd >= 3 || (odd >= 1 && even >= 2))
        {
            YES
            if(odd >= 3)
                cout << o[0]+1 << " " << o[1]+1 << " " << o[2]+1 << endl;
            else
                cout << o[0]+1 << " " << e[0]+1 << " " << e[1]+1 << endl;
        }
        else NO
    }
}