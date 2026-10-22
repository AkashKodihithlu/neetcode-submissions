class Solution {
private:
vector<int>sumLeft;
vector<int>sumRight;
public:
    int pivotIndex(vector<int>& nums) {
     int n=nums.size();
     sumLeft.resize(n+1,0);
     sumRight.resize(n+1,0);
     for(int i=0;i<n;i++)
     {
        sumLeft[i+1]=sumLeft[i]+nums[i];
     }   
     for(int i=n-1;i>=0;i--)
     {
        sumRight[i]=sumRight[i+1]+nums[i];
     }
     for(int i =0;i<n;i++)
     {
        if(sumLeft[i]==sumRight[i+1])
        return i;
     }
     return -1;
    }
};