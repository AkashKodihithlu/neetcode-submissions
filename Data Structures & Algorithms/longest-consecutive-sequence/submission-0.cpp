class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int longest=0;
        unordered_set<int>hash_set;
        for(int num:nums)
        hash_set.insert(num);

        for(int n:hash_set)
        {
            if(hash_set.find(n-1) == hash_set.end())
            {
                int count=1;
                int i=1;
                while(hash_set.find(n+i)!=hash_set.end())
                {
                    count++;
                    i++;
                }
                longest=max(longest,count);
            }
        }
        return longest;
    }
};
