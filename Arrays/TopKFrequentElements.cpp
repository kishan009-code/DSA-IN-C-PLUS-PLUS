// Problem: Top K Frequent Elements (LeetCode 347)
// Pattern: Hashing + Sorting
// Time Complexity: O(n + m log m), where m = number of unique elements
// Space Complexity: O(m)

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mp;

        // Count frequency of each element
        for (int x : nums) {
            mp[x]++;
        }

        // Store {frequency, element}
        vector<pair<int, int>> freq;

        for (auto i : mp) {
            freq.push_back({i.second, i.first});
        }

        // Sort by frequency in descending order
        sort(freq.rbegin(), freq.rend());

        // Take top k elements
        vector<int> ans;

        for (int i = 0; i < k; i++) {
            ans.push_back(freq[i].second);
        }

        return ans;
    }
};



