class Solution {
public:
    int maxArea(vector<int>& heights) {
        int i=0,j=heights.size()-1;
        int maxHeight=0,distance,maxArea=0;
        for(int i=0;i<heights.size();i++)
        {

            for(int j=0;j<heights.size();j++)
            {
                if(i==j) continue;
          distance=j-i;
          maxHeight=min(heights[i],heights[j]);
          maxArea=max(maxArea,maxHeight*distance);
            }
        }
        return maxArea;
    }
};
