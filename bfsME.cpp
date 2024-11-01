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
#define nl endl
#define ll long long int
#define testcase int t; cin >> t; while(t--)

const int n = 20;
vi a[n];
int vis[n];
int lvl[n];

void add(int x, int y)
{
    a[x].push_back(y);
    a[y].push_back(x);
}
void bfs(int source)
{
    queue<int> v;
    v.push(source);
    vis[source] = 1;
    while(v.size())
    {
        int cur_v = v.front();
        v.pop();
        cout << cur_v << " -> ";
        for(int child : a[cur_v])
        {
            if(!vis[child])
            {
                vis[child] = 1;
                v.push(child);
                lvl[child] = lvl[cur_v] + 1;
            }
        }
    }
    cout << endl;
}

int main()
{
   add(1, 5);
   add(1, 4);
   add(2, 3);
   add(2, 5);
   add(2, 6);
   add(3, 4);
   add(3, 6);
   add(5, 4);
   add(6, 4);
   add(6, 5);
   bfs(1);
   rep(1, 6)
    cout << i << ": " << lvl[i] << endl;
}