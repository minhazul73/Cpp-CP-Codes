#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    void* p;
    vector<void*> add;

    cin >> s;
    s.pop_back();
    int l = s.length();

    for (int i = 0; i < l; ++i)
    {
        if (isalpha(s[i]))
        {
            p = new char(s[i]);
            add.push_back(p);
            cout << s[i] << "\t" << p << "\tidentifier\n";
        }
    }


}