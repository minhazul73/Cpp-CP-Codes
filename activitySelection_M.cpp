#include <bits/stdc++.h>
using namespace std;

#define rep(s, n) for(int i = s; i < n; i++)
#define rrep(e, n) for(int i = n - 1; i >= e; i--)
#define vi vector<int>
#define pb push_back
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define asort(a) sort(a, a + n)
#define vsort(v) sort(all(v))
#define YES cout << "YES" << endl;
#define NO cout << "NO" << endl;
#define nl endl
#define ll long long int
#define testcase int t; cin >> t; while(t--)

int main() 
{
    int n;
    cin >> n;       //number of activities

    int start[n], finish[n];
    for (int i = 0; i < n; i++) 
        cin >> start[i];        //start time for activity
    for (int i = 0; i < n; i++)
       cin >> finish[i];        //finish time for activity

    // finishing time ascending akare sajabo
    for (int i = 0; i < n - 1; i++) 
    {
        for (int j = 0; j < n - i - 1; j++) 
        {
            if (finish[j] > finish[j + 1]) 
            {
                int temp = finish[j];
                finish[j] = finish[j + 1];
                finish[j + 1] = temp;
     //swap start time to maintain with finishing time i.e finishing time er sathe er start o swap hobe
                temp = start[j];
                start[j] = start[j + 1];
                start[j + 1] = temp;
            }
        }
    }

    cout << "Following activities are selected:" << endl;

    int i = 0;
    cout << "(" << start[i] << ", " << finish[i] << ") ";

    for (int j = 1; j < n; j++) {
        if (start[j] >= finish[i]) {
            cout << "(" << start[j] << ", " << finish[j] << ") ";
            i = j;
        }
    }

    return 0;
}