#include <bits/stdc++.h>
using namespace std;

int main()
{
    unordered_map<int, int> un;
    vector<int> seq;
    int n; while (cin >> n)
    {
        if(!un[n])
            seq.push_back(n);
    
        un[n]++;
    }

    for(int i = 0; i < seq.size(); i++)
        cout << seq[i] << " " << un[seq[i]] << endl; 
    
}