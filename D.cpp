#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        int a, b;
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = i + 1; j < nums.size(); j++)
            {
                if (nums[i] + nums[j] == target)
                {
                    a = i, b = j;
                    break;
                }
            }
        }
        cout << a << " " << b;
        return {a, b};
    }
};

int main()
{
    Solution ob;
    vector<int> v;
    v.push_back(3);
    v.push_back(2);
    v.push_back(3);
    ob.twoSum(v, 6);
}