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

double evaluatePolynomial(const vi& coefficients, int x) {
    int result = 0;
    rep (0, coefficients.size()) 
        result = result * x + coefficients[i];
    return result;
}

int main() 
{
    // testcase
    {    
        string line;
        vi coefficients;
        vi x_values;
        bool readCoefficients = true;

        while (getline(cin, line)) 
        {
            stringstream ss(line);
            int num;
            vi values;
            
            while (ss >> num) 
                values.push_back(num);
            
            if (readCoefficients) coefficients = values;
            else 
            {
                x_values = values;
                rep(0, x_values.size()) 
                    cout << evaluatePolynomial(coefficients, x_values[i]) << " ";
                cout << endl;
            }
            readCoefficients = !readCoefficients;
        }
    }    
}

