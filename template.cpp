#include <functional>
#include <utility>
#include <numeric>
#include <set>
#include <map>
#include <list>
#include <iomanip>
#include <cmath>
#include <string>
#include <limits>
#include <bitset>
#include <iterator>
#include <time.h>
#include <vector>
#include <queue>
#include <deque>
#include <stack>
#include <complex>
#include <sstream>
#include <iostream>
#include <string.h>
#include <algorithm>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <valarray>
#include <assert.h>

using namespace std;

#define loop(a, n) for (int i = a; i < n; i++)
#define rloop(a, n) for (int i = n - 1; i >= a; i--)
#define YES cout << "YES" << endl;
#define NO cout << "NO" << endl;
#define sp " "
#define new cout << endl;
#define ll long long int
#define len(str) str.length()
#define all(cont) cont.begin(), cont.end()
#define rall(cont) cont.end(), cont.begin()
#define FOREACH(it, l) for (auto it = l.begin(); it != l.end(); it++)
#define IN(A, B, C) assert(B <= A && A <= C)
#define MP make_pair
#define PB push_back
#define INF (int)1e9
#define EPS 1e-9
#define PI 3.1415926535897932384626433832795
#define MOD 1000000007
#define read(type) readInt<type>()
#define vec(v)         \
    for (auto &it : v) \
    {                  \
        cin >> it;     \
    }
#define VIT vector<int>::iterator it;

typedef pair<int, int> PII;
typedef vector<int> VI;
typedef vector<string> VS;
typedef vector<PII> VII;
typedef vector<VI> VVI;
typedef map<int, int> MPII;
typedef set<int> SETI;
typedef multiset<int> MSETI;
typedef long int int32;
typedef unsigned long int uint32;
typedef long long int int64;
typedef unsigned long long int uint64;

const double pi = acos(-1.0);

//int dx[8] = {-1, 1, 0, 0, 1, -1, 1, -1};
//int dy[8] = {0, 0, 1, -1, 1, -1, -1, 1};

int start_up()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}


bool isPrime(int n)
{
    if (n <= 1)
    {
        return false;
    }
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int nThPrime(int n)
{
    int i = 2;
    while (n > 0)
    {
        if (isPrime(i))
        {
            n--;
        }
        i++;
    }
    i -= 1;
    return i;
}

int DigitSum(int n)
{
    int sum = 0, m;
    while (n > 0)
    {
        m = n % 10;
        sum += m;
        n = n / 10;
    }
    return sum;
}

void solve()
{
    int i, n, f = 0; cin >> n;
    string s, temp = "";
    cin >> s;

    for(i = 0; i < n; i++)
    {
        s[i] = tolower(s[i]);
    }
    for(i = 0; i < n - 1; i++)
    {
        if(s[i] != s[i+1])
            temp += s[i];
    }
    temp += s[n-1];

    //cout << temp << endl;

    if(temp.size() == 4)
    {
        if(temp == "meow")
            YES
        else NO
    }
    else NO
}

int main()
{
    start_up();

    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
