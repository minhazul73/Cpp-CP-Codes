#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int a, b, c;
    cin >> a >> b >> c;

    int cnt = (a % 2) + (b % 2) + (c % 2);

    if(cnt <= 1) cout << "Yes" << endl;
    else cout << "No" << endl;
}
