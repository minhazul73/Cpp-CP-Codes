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
    int bestIndex = -1; // Track index of the best fit hole
    for (int j = 0; j < n; j++) // Check each hole
      if (req[i] <= holes[j]) // Hole is large enough
        if (bestIndex == -1 || holes[j] < holes[bestIndex]) // Check if it's a better fit
          bestIndex = j;

    for (int j = 0; j < n; j++)
      if (j == bestIndex) cout << "Is " << holes[j] << " Best Fit for " << req[i] << "?: Yes" << endl;
      else cout << "Is " << holes[j] << " Best Fit for " << req[i] << "?: No" << endl;
    
    if (bestIndex != -1) holes[bestIndex] -= req[i];
    else cout << "No suitable hole for " << req[i] << endl;
    cout << endl; 
  }
}
