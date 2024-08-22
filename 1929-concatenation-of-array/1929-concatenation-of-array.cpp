class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) 
    {
      int len = nums.size();
      vector<int> res(2*len,0);
      for(int i=0; i<len; i++)
      {
        res[i]=nums[i];
      }  
      for(int i=0; i<len; i++)
      {
        res[i+len]=nums[i];
      }
      return res;
    }
};