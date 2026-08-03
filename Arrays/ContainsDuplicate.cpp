// Problem: Contains Duplicate(LeetCode 217)
// Pattern: Hashing (unordered_set)
// Time Complexity: O(n)
// Space Complexity: O(n)

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> st;

        for (int x : nums) {
            if (st.count(x))
                return true;

            st.insert(x);
        }

        return false;
    }
};