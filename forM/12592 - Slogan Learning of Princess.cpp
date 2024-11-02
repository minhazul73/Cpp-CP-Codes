#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n;  
    cin >> n;
    cin.ignore();  

    map<string, string> sloganMap;
    string s1, s2;

    for (int i = 0; i < n; i++) 
    {
        getline(cin, s1);
        getline(cin, s2);
        sloganMap[s1] = s2;
    }

    cin >> n;
    cin.ignore();  

    for (int i = 0; i < n; i++) 
    {
        getline(cin, s1);
        cout << sloganMap[s1] << endl;
    }
}
