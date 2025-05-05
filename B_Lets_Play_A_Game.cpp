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
    int n, m, queries; // Renamed q to queries
    cin >> n >> m >> queries;

    vi games(n + 1); // Array to store which game each student likes
    rep(1, n + 1) cin >> games[i];

    vvi adj(n + 1);  // Adjacency list for graph
    vi start_time(m + 1, -1); // To store the starting time for each game
    rep(0, queries)
    {
        int u, v; 
        cin >> u >> v;
        adj[u].pb(v);
        adj[v].pb(u);
    }

    vi visited(n + 1, 0); // To mark visited nodes
    queue<pair<int, int>> q; // <node, time>
    
    rep(1, n + 1)
    {
        if (!visited[i])
        {
            int game_time = 0; // Replace with appropriate logic for time calculation
            q.push({i, game_time});
            visited[i] = 1;
            
            while (!q.empty())
            {
                auto [node, time] = q.front();
                q.pop();
                
                for (int neighbor : adj[node])
                {
                    if (!visited[neighbor])
                    {
                        visited[neighbor] = 1;
                        q.push({neighbor, time + 1});
                    }
                }
            }
        }
    }

    // Output the starting times for each game
    rep(1, m + 1)
    {
        cout << start_time[i] << nl;
    }

    return 0;
}
