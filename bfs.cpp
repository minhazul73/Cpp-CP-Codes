#include<bits/stdc++.h>
using namespace std;

vector<int>a[20];
int v;

void add(int x, int y)
{
    a[x].push_back(y);
    a[y].push_back(x);
}

void bfs(int source)
{
    int visited[v + 1] = {};    // 
    queue<int> q;
    q.push(source);
    visited[source] = 1;        // visited = 1, 0, 0, 1, 1, 0
    while(q.size())             // kyu = ,
    {
        source = q.front();
        cout << source << "->";
        q.pop();
        for(int i = 0; i < a[source].size(); i++)
        {
            if(visited[a[source][i]] == 0)
            {
                visited[a[source][i]] = 1;
                q.push(a[source][i]);
            }
        }
    }
}
int main()
{
   v = 6;
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
}