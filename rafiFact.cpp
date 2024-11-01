#include <bits/stdc++.h>
using namespace std;

long long recursiveFactorial(int n)
{
    if(n == 1) return 1;
    long long f = recursiveFactorial(n - 1);
    return f *= n;
}
long long nonRecursiveFactorial(int n)
{
    int f = 1;
    for(int i = 1; i <= n; i++) f *= i;
    return f; 
}
int main()
{
    int n; cin >> n;
    cout << "Recursive: " << recursiveFactorial(n) << endl;
    cout << "NonRecursive: " << nonRecursiveFactorial(n) << endl;
}