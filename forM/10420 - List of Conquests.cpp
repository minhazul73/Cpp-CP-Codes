#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<string, int> mp;
    int t; cin >> t; while (t--)
    {
        string s1, trash; 
        cin >> s1;
        getline(cin, trash);
        mp[s1]++;
    }
    for(auto& m : mp) cout << m.first << " " << m.second << endl; 
}