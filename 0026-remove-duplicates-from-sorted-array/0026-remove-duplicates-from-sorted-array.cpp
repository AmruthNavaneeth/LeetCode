class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
     int unique=0;
        for(int i=0; i<nums.size(); i++)
        {
             if(nums[i]!= nums[unique])
                 nums[++unique] = nums[i];
        }
        return unique+1;            
        }
};