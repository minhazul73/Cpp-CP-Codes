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

  for (int i = 0; i < m; i++) // Iterate over requests
  {
    int worstIndex = -1; // Track index of the worst fit hole
    for (int j = 0; j < n; j++) // Check each hole
      if (req[i] <= holes[j]) // Hole is large enough
        if (worstIndex == -1 || holes[j] > holes[worstIndex]) 
          worstIndex = j;

    for (int j = 0; j < n; j++)
      if (j == worstIndex) cout << "Is " << holes[j] << " Worst Fit for " << req[i] << "?: Yes" << endl;
      else cout << "Is " << holes[j] << " Worst Fit for " << req[i] << "?: No" << endl;

    if (worstIndex != -1) holes[worstIndex] -= req[i];
    else cout << "No suitable hole for " << req[i] << endl;
    cout << endl; 
  }
}
