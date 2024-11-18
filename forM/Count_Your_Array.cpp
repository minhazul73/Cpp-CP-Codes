#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, q; cin >> n >> q;
    map<int, int> mp;
    for(int i = 0; i < n; i++)
    {
        int x; cin >> x;
        mp[x]++;
    }
    for(auto& i : mp) cout << i.second << " ";
}