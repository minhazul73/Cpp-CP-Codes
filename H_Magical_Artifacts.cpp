#include <bits/stdc++.h>
using namespace std;

#define rep(s, n) for(int i = s; i < n; i++)
#define rrep(e, n) for(int i = n - 1; i >= e; i--)
#define ll long long int
#define vi vector<int>
#define vll vector<ll>
#define vvi vector<vector<int>>
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
#define speed ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define testcase int t; cin >> t; while(t--)

int main()
{
    speed
    testcase
    {
        ll n, k;
        cin >> n >> k;

        // Count of odd numbers up to n
        ll odd_count = (n + 1) / 2;

        if (k <= odd_count)
        {
            // If k is within the odd numbers, the result is directly the k-th odd number
            cout << 2 * k - 1 << nl;
        }
        else
        {
            // If k is beyond the odd numbers, it lies in the even numbers
            k -= odd_count; // Adjust k to refer to the even part
            cout << 2 * k << nl;
        }
    }
}