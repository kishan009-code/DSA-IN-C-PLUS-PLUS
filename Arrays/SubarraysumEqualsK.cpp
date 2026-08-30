// Problem: Subarray Sum Equals K (LeetCode 560)
// Pattern: Prefix Sum + Hashing
// Time Complexity: O(n) average
// Space Complexity: O(n)

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> mp;

       
        mp[0] = 1; // Prefix sum 0 occurs once before traversing the array

        int prefixSum = 0;
        int count = 0;

        for (int x : nums) {
            prefixSum += x;

            int diff = prefixSum - k;

            if (mp.find(diff) != mp.end()) {//if diff found in hash map
                count += mp[diff];
            }

            mp[prefixSum]++;
        }

        return count;
    }
};
