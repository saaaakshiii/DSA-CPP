#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm>
using namespace std;

int maxDistinctElements(vector<int>& nums, int k) {
    unordered_set<int> distinct; // To store distinct numbers
    int n = nums.size();

    // For each number, try all possible values in the range [-k, k]
    for (int num : nums) {
        // Iterate through the range [-k, k]
        for (int x = -k; x <= k; ++x) {
            num=num+x;
        }
    }

    // The size of the set is the maximum number of distinct elements
    int count=0;
    sort(nums.begin(), nums.end());

    for (int i = 0; i < n; i++)
    {
        if(nums[i]!=nums[i+1])
            count++;
    }
    return count;
}

int main() {
    // Example input
    vector<int> nums = {1, 2, 2, 3, 3, 4};
    int k = 2;

    // Output the result
    cout << "Maximum number of distinct elements: " << maxDistinctElements(nums, k) << endl;

    return 0;
}
