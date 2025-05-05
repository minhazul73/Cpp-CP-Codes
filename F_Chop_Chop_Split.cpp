#include <bits/stdc++.h>
using namespace std;

#define rep(s, n) for(int i = s; i < n; i++)
#define rrep(e, n) for(int i = n - 1; i >= e; i--)
#define vi vector<int>
#define vll vector<long long>
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
#define ll long long int
#define speed ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define testcase int t; cin >> t; while(t--)

int main()
{
    speed
    testcase
    {
        int n;
        ll k;
        cin >> n >> k;

        vll costs(n);
        rep(0, n) cin >> costs[i];

        // Sort the items in ascending order
        sort(all(costs));

        ll total = accumulate(all(costs), 0LL); // Total sum of costs
        ll akib_sum = 0;                        // Akib's sum
        ll sabbir_sum = total;                  // Sabbir's initial sum
        ll result = LLONG_MAX;                  // Initialize the result as max

        for (int i = n - 1; i >= 0; i--)
        {
            // Akib takes the current item
            akib_sum += costs[i];
            sabbir_sum -= costs[i];

            // Remaining increase budget `k`
            ll remaining_k = k;

            // Adjust Sabbir's sum optimally by distributing `remaining_k` to all items Akib hasn't taken
            if (i > 0)
            {
                ll min_value = costs[0]; // Minimum item cost
                ll max_increase = remaining_k / i; // Maximum possible increase per item
                min_value += min(max_increase, remaining_k);

                ll new_sabbir_sum = sabbir_sum + i * min_value;
                ll score = abs(akib_sum - new_sabbir_sum);

                result = min(result, score);
            }
            else
            {
                // Only one item left
                result = min(result, abs(akib_sum - sabbir_sum));
            }
        }

        cout << result << nl;
    }
}