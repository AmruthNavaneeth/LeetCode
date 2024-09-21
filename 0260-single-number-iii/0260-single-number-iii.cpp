class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        vector<int> ans;
      unordered_map<int,int> mp;
        for(int m:nums)
        {
           mp[m]++; 

        }
        for(auto [x,y]:mp)
        {
            if(y==1) ans.push_back(x);
        }
        return ans;
    }
};
