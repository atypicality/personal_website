class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> heights2 = heights;
        sort(heights2.begin(), heights2.end());
        int counter=0;
        for(int i = 0; i < heights.size(); i++)
        {
            if(heights[i]!=heights2[i]) counter++;
        }
        return counter;
    }
};