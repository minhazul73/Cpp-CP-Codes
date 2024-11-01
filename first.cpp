#include <iostream>
using namespace std;




int main()
{
    int n, arr[100], pos, val;
    //cout << "enter array size :";
    cin >> n;
    //cout << "enter array elements :";
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    //cout << "the value you want to insert :";
    cin >> val;
    //cout << "enter position :";
    cin >> pos;

    if(pos == 1)
    {
        for(int i = n - 1; i >= 0; i--)
        {
            arr[i + 1] = arr[i]; 
        }
        arr[0] = val; 
        n++;
    }
    else if(pos == 2)
    {
        
        for(int i = n - 1; i >= 0; i--)
        {
            arr[i + 1] = arr[i]; 
        }
        arr[0] = val; 
        n++;
    }
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";
}
