class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        int l=0, h=nums.size()-1;
        while(l<h)
        {
            int sum=nums[l]+nums[h];
            if(sum==target)
            {
                ans.push_back(l+1);
                ans.push_back(h+1);
                return ans;
            }
           else if(sum>target) h--;
            else l++;
        }
        return ans;
    }
};