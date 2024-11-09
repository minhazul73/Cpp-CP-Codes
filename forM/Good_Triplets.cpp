#include <bits/stdc++.h>
using namespace std;

set<tuple<int, int, int>> findGoodTriplets(const vector<int>& nums) {
    set<tuple<int, int, int>> uniqueTriplets;
    int n = nums.size();

    // Sort the vector to help with unique triplet generation
    vector<int> sortedNums = nums;
    sort(sortedNums.begin(), sortedNums.end());

    // Iterate through the sorted vector
    for (int i = 0; i < n; ++i) {
        int c = sortedNums[i];
        int left = 0, right = i - 1;

        // Use two-pointer approach to find pairs (a, b) such that a + b = c
        while (left < right) {
            int a = sortedNums[left];
            int b = sortedNums[right];
            if (a + b == c) {
                // Insert as a sorted tuple to maintain order
                uniqueTriplets.insert(make_tuple(a, b, c));
                ++left;
                --right;
            } else if (a + b < c) {
                ++left;
            } else {
                --right;
            }
        }
    }

    return uniqueTriplets;
}

int main() {
    vector<int> nums = {2, 1, 3, 5, -1};

    set<tuple<int, int, int>> triplets = findGoodTriplets(nums);

    // Print out the unique triplets
    for (const auto& triplet : triplets) {
        cout << "(" << get<0>(triplet) << ", " << get<1>(triplet) << ", " << get<2>(triplet) << ")\n";
    }

    // Print out the total number of unique triplets
    cout << "Total number of unique triplets: " << triplets.size() << endl;

    return 0;
}
