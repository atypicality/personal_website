class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        map<int,string> tall;
        for(int i = 0; i < heights.size(); i++)
        {
            tall[heights[i]] = names[i];
        }

        sort(heights.begin(), heights.end(),greater<int>());
        for(int i = 0; i < heights.size(); i++)
        {
            names[i] = tall[heights[i]];
        }
        return names;

    }
};