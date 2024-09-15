#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> numSet(nums1.begin(), nums1.end());
        vector<int> result;
        for (const int num : nums2) {
            if (numSet.count(num)) {
                result.push_back(num);
                numSet.erase(num);
            }
        }
        return result;
    }
};

