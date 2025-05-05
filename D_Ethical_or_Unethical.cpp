#include <bits/stdc++.h>
using namespace std;

#define rep(s, n) for(int i = s; i < n; i++)
#define rrep(e, n) for(int i = n - 1; i >= e; i--)
#define vi vector<int>
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
    int n;
    cin >> n;
    vector<string> contacts(n);
    unordered_map<string, int> substring_count;

    // Input all contacts
    rep(0, n) cin >> contacts[i];

    // Count all substrings
    for (const string& number : contacts)
    {
        int len = number.size();
        for (int i = 0; i < len; i++)
        {
            for (int j = 1; j <= len - i; j++)
            {
                string substring = number.substr(i, j);
                substring_count[substring]++;
            }
        }
    }

    // Find the shortest unique substring for each contact
    vector<string> results(n);
    rep(0, n)
    {
        string number = contacts[i];
        int len = number.size();
        string shortest = number;

        for (int i = 0; i < len; i++)
        {
            for (int j = 1; j <= len - i; j++)
            {
                string substring = number.substr(i, j);
                if (substring_count[substring] == 1)
                {
                    if (substring.size() < shortest.size())
                    {
                        shortest = substring;
                    }
                }
            }
        }

        results[i] = shortest;
    }

    // Output results
    for (const string& res : results)
    {
        cout << res << nl;
    }

    return 0;
}