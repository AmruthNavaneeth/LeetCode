class Solution {
public:
    bool containsDuplicate(vector<int>& v) {
        unordered_set<int>u(v.begin(),v.end());
           return v.size()!=u.size();
    }
};