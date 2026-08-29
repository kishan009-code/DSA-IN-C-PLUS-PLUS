// Problem: Longest Consecutive Sequence (LeetCode 128)
// Pattern: Hashing (unordered_set)
// Time Complexity: O(n) average
// Space Complexity: O(n)

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st(nums.begin(), nums.end());

        int ans = 0;

        for (int x : st) {

            // x is the start of a sequence
            if (st.count(x - 1) == 0) {
                int current = x;
                int length = 1;

                // Find the consecutive sequence
                while (st.count(current + 1)) {
                    current++;
                    length++;
                }

                ans = max(ans, length);
            }
        }

        return ans;
    }
};