#include <bits/stdc++.h>
using namespace std;

int main()
{
    queue<int> q;
    int t; cin >> t; while(t--)
    {
        int x; cin >> x;
        if(x == 1)
        {
            cin >> x;
            q.push(x);
        }
        else if(x == 2) 
        {
            if(!q.empty())
                q.pop();
        }
        else
        {
            if(q.empty()) cout << "Empty!\n";
            else cout << q.front() << endl;
        }
    }
}