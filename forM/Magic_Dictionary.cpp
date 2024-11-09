#include<bits/stdc++.h>
using namespace std;

int main()
{
    set<string> ss;
    string s;
    while(cin >> s)
    {
        string cleaned;
        for(char c : s)
            if(isalpha(c)) cleaned += tolower(c);

        if(!cleaned.empty()) ss.insert(cleaned);
    }

    for(auto& word : ss) cout << word << endl;
}