class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>> ans;
        for(int i=0;i<nums.size();i++)
        {
            
            for(int j=i+1;j<nums.size();j++)
            {
                for(int k=j+1;k<nums.size();k++)
                {

                   if(nums[i]+nums[j]+nums[k]==0)
                   {
                   vector<int>answer = {nums[i],nums[j],nums[k]};
                   sort(answer.begin(),answer.end());
                   ans.insert(answer);
                   }
                }
            }
        }
        vector<vector<int>> res(ans.begin(), ans.end());
        return res;

    }
};