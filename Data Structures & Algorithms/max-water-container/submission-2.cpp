class Solution {
public:
    int maxArea(vector<int>& height) {
        int left=0,n=height.size(),right=n-1,width,minHeight=0,container,maxWater=0;
        while(left<right)
        {
           width=right-left;
           minHeight=min(height[left],height[right]);
           container=width*minHeight;
           maxWater=max(maxWater,container);
           height[left]<height[right]?left++:right--;
        }
        return maxWater;
    }
};