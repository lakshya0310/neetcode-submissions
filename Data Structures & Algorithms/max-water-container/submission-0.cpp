class Solution {
public:
    int maxArea(vector<int>& heights) {
        int i = 0 , j = heights.size()-1;
        int maxarea = 0;
        while(i<j){
            int w = j -i;
            int h = min(heights[i],heights[j]);
            maxarea = max(maxarea,h*w);
            if(h==heights[i]) i++;
            else j--;
        }
        return maxarea;
    }
};
