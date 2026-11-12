class Solution {
public:
    int maxArea(vector<int>& heights) {
        int i=0,j=heights.size()-1;
        int maxHeight=0,distance;
        while(i<j)
        {
          if(heights[i]<heights[i+1]) i++;
          if(heights[j]<heights[j-1]) j--;
          distance=j-i;
          maxHeight=min(heights[i],heights[j]);
        return distance*maxHeight;

        }
    }
};
