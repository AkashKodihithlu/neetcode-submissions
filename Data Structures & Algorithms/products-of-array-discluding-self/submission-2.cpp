class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int>left_array(n,1);
        vector<int>right_array(n,1);

        int left_mult=1;
        int right_mult=1;

        for(int i=0;i<n;i++)
        {
            int j=n-1-i;

            left_array[i] = left_mult;
            right_array[j] = right_mult;

            left_mult *= nums[i];
            right_mult *= nums[j];
        }

        vector<int> ans(n);
        for(int i=0;i<n;i++)
        ans[i] = left_array[i]*right_array[i];

        return ans;
    }
};
