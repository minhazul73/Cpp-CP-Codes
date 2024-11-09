#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    stack<int> st;
    for(int i = 0; i < n; i++)
    {
        string s; cin >> s;
        if(s != "D" && s != "C" && s != "+")
        {
            int x = stoi(s);
            st.push(x);
        }
        else if(s == "D")
        {
            st.push(st.top() * 2);
        }
        else if(s == "C")
        {
            st.pop();
        }
        else if(s == "+")
        {
            int x = st.top();
            st.pop();
            int y = st.top();
            st.pop();
            st.push(y);
            st.push(x);
            st.push(x + y);
        }
    }
    int sum = 0;
    while(!st.empty())
    {
        sum += st.top();
        st.pop();
    }
    cout << sum;
}