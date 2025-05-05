#include <bits/stdc++.h>
using namespace std;

#define rep(s, n) for (int i = s; i < n; i++)
#define rrep(e, n) for (int i = n - 1; i >= e; i--)
#define ll long long int
#define vi vector<int>
#define vll vector<ll>
#define vvi vector<vector<int>>
#define mpii map<int, int>
#define mpis map<int, string>
#define pb push_back
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define asort(a) sort(a, a + n)
#define vsort(v) sort(all(v))
#define YES cout << "YES" << endl;
#define NO cout << "NO" << endl;
#define nl endl
#define speed ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define testcase int t; cin >> t; while(t--)

struct Transaction {
    int id;         
    int priority;   
    string type;    
};
// Custom compare function
bool compare(Transaction a, Transaction b) {
    if (a.priority == b.priority)
        return a.id < b.id; 
    return a.priority < b.priority; 
}

int main() {
    speed
    vector<Transaction> transactions = {
        {1, 2, "Customer Transaction (Deposit)"}, 
        {2, 3, "Batch Processing (End of Day)"}, 
        {3, 1, "Fraud Detection (Flagged)"},
        {4, 2, "Customer Transaction (Transfer)"}, 
        {5, 3, "Batch Processing (End of Day)"}, 
    };


    sort(all(transactions), compare); // sorting using custom comperator sort

    cout << "Processed Transactions in Order:" << nl;
    for (auto transaction : transactions) {
        cout << "Transaction ID: " << transaction.id << ", "
             << "Priority: " << transaction.priority << ", "
             << "Type: " << transaction.type << nl;
    }
}
