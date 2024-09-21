class Solution {
public:
    int singleNumber(vector<int>& nums) {
      unordered_map<int,int> mp;
        for(int m:nums)
        {
           mp[m]++; 

        }
        for(auto [x,y]:mp)
        {
            if(y==1) return x;
        }
        return -1;
    }
};