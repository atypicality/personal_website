class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        vector<vector<int>> answer;
        if(m*n>original.size() || (m*n)%original.size()!=0) return answer;
        int counter = 0;
        for(int i = 0; i < m; i++)
        {
            vector<int> row;
            for(int i = 0; i<n; i++)
            {
                row.push_back(original[counter]);
                                counter++;
            }
            answer.push_back(row);
        }
        return answer;

    }
};