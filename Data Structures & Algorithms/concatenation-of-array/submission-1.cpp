class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
     vector<int> ans;
     ans.insert(ans.end(),nums.begin(),nums.end());
     ans.insert(ans.end(),ans.begin(),ans.end());
     return ans;   
    }
};