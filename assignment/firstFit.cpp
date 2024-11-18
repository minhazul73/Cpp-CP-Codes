#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m; cin >> n >> m;
    int holes[n], req[m];
    for (int i = 0; i < n; i++)
        cin >> holes[i];
    for (int i = 0; i < m; i++)
        cin >> req[i];

    for (int i = 0; i < n; i++)
    {
        int f = 0;
        for (int j = 0; j < m; j++)
        {
            if (f) cout << "Is " << holes[j] << " First Fit for " << req[i] << "?: No" << endl;
            else if (req[i] <= holes[j])
            {
                cout << "Is " << holes[j] << " First Fit for " << req[i] << "?: Yes" << endl;
                f++;
                holes[j] = holes[j] - req[i];
            }
        }
        cout << endl;
    }
}