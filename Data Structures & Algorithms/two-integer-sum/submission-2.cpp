class Solution {
int sum=0;
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int i =0;i<nums.size();i++)
        {
            for(int j=1;j<nums.size();j++)
            {
                sum=nums[i]+nums[j];
                if(sum==target)
                return {i,j};
            }
        }
return {-1,-1};
        
    }
};
