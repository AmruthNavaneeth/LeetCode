#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        return dfs(nums, 0, 0);
    }

private:
    int dfs(const vector<int>& nums, int i, int xors) {
        if (i == nums.size())
            return xors;

        const int without_current = dfs(nums, i + 1, xors);
        const int with_current = dfs(nums, i + 1, nums[i] ^ xors);

        return without_current + with_current;
    }
};
