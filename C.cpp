#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, n, t, f = 0;
    string a;
    cin >> t;
    while (t--)
    {
        cin >> a;
         f = 0;
        for(i = 0; i < a.length(); i++)
        {
            // if((a[i] == '1' && a[i+1] != '0') || (a[i] == '0' && a[i+1] != '1'))
            // {
            //     f = 1;
            //     break;
            // }
            if(a[i] == '1')
                if(a[i+1] != '0')
                {
                   f = 1;
                   break; 
                }
            else if(a[i] == '0')
                if(a[i+1] != '1')
                {
                   f = 1;
                   break; 
                }
        }
        if(f == 0)
            cout << "Good" << endl;
        else cout << "Bad" << endl;
    }
}
