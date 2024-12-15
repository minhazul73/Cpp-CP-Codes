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
    //testcase
    {
        int n; cin >> n;
        deque<int> v(n);
        rep(0, n) cin >> v[i];
        int sum1 = 0, sum2 = 0, f = 1;
        rep(0, n) {
            if(f) {
                if(v.front() > v.back()) 
                {
                    sum1 += v.front();
                    v.pop_front();   
                }
                else {
                    sum1 += v.back();
                    v.pop_back();
                }
                f = 0;
            }
            else {
                if(v.front() > v.back()) 
                {
                    sum2 += v.front();
                    v.pop_front();   
                }
                else {
                    sum2 += v.back();
                    v.pop_back();
                }
                f = 1;
                
            }
        }
        cout << sum1 << " " << sum2 << endl;
    }    
}

