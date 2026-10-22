class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>hash_map;
        for(int i = 0;i<nums.size();i++)
        {
            int current_num=nums[i];
            int value=target-current_num;
            if(hash_map.find(value)!=hash_map.end())
            {
                return{hash_map[value],i};
            }
            hash_map[current_num]=i;
        }
        return {-1,-1};
    }
};