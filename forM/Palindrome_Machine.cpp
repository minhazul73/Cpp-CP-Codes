#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s, ss; 
    while (cin >> s)
    {
        string cleaned;
        for(char c : s)
            if(isalpha(c)) cleaned += tolower(c);

        if(!cleaned.empty()) ss.append(cleaned);
    }
    for(int i = 0; i < ss.size() / 2; i++)
    {
        if(ss[i] != ss[ss.size() - 1 - i])
        {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
}