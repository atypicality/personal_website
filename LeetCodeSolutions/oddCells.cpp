class Solution {
public:
    int oddCells(int m, int n, vector<vector<int>>& indices) {
        vector<vector<int>> matrix;
        for(int i = 0; i < m; i++)
        {
            vector<int> row;
            for(int j = 0; j < n; j++)
            {
                row.push_back(0);
            }
            matrix.push_back(row);
        }

        for(int i = 0; i < indices.size(); i++)
        {
            for(int j = 0; j < matrix[indices[i][0]].size(); j++)
            {
               matrix[indices[i][0]][j]++; 
            }
            for(int j = 0; j < matrix.size(); j++)
            {
                matrix[j][indices[i][1]]++; 
            }
        }
        int answer = 0;
         for(int i = 0; i < m; i++)
        {
            for(int j = 0; j < n; j++)
            {
                cout << matrix[i][j];
                if(matrix[i][j]%2!=0) answer++;
            }
            cout << "" << endl;
        }
        return answer;
    }
};