class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i = 0; i < 9; i++)
        {   
            string test = "";
            map<int,int> checks;
            for(int j = 0; j < 9; j++)
            {
                test = test + board[i][j];
                if(board[i][j]=='.') continue;
                else{
                    if(checks[board[i][j]]==1) return false;
                    checks[board[i][j]]++;
                }
            }
            cout << test << endl;
        }
        for(int i = 0; i < 9; i++)
        {
            map<int,int> checks;
            for(int j = 0; j < 9; j++)
            {
                if(board[j][i]=='.') continue;
                else{
                    if(checks[board[j][i]]==1) return false;
                    checks[board[j][i]]++;
                }
            }
        }
        map<int,int> checks;
        for(int i  = 0; i < 3; i++)
        {
            for(int j = 0; j < 3; j++)
            {
                if(board[i][j]=='.') continue;
                else{
                    if(checks[board[i][j]]==1) return false;
                    checks[board[i][j]]++;
                }
            }
        }
        map<int,int> checks2;
        for(int i  = 0; i < 3; i++)
        {
            for(int j = 3; j < 6; j++)
            {
                if(board[i][j]=='.') continue;
                else{
                    if(checks2[board[i][j]]==1) return false;
                    checks2[board[i][j]]++;
                }
            }
        }
        map<int,int> checks3;
         for(int i  = 0; i < 3; i++)
        {
            for(int j = 6; j < 9; j++)
            {
                if(board[i][j]=='.') continue;
                else{
                    if(checks3[board[i][j]]==1) return false;
                    checks3[board[i][j]]++;
                }
            }
        }
        map<int,int> checks4;
         for(int i  = 3; i < 6; i++)
        {
            for(int j = 0; j < 3; j++)
            {
                if(board[i][j]=='.') continue;
                else{
                    if(checks4[board[i][j]]==1) return false;
                    checks4[board[i][j]]++;
                }
            }
        }
        map<int,int> checks5;
         for(int i  = 3; i < 6; i++)
        {
            for(int j = 3; j < 6; j++)
            {
                if(board[i][j]=='.') continue;
                else{
                    if(checks5[board[i][j]]==1) return false;
                    checks5[board[i][j]]++;
                }
            }
        }
        map<int,int> checks6;
        for(int i  = 3; i < 6; i++)
        {
            for(int j = 6; j < 9; j++)
            {
                if(board[i][j]=='.') continue;
                else{
                    if(checks6[board[i][j]]==1) return false;
                    checks6[board[i][j]]++;
                }
            }
        }
        map<int,int> checks7;
        for(int i  = 6; i < 9; i++)
        {
            for(int j = 0; j < 3; j++)
            {
                if(board[i][j]=='.') continue;
                else{
                    if(checks7[board[i][j]]==1) return false;
                    checks7[board[i][j]]++;
                }
            }
        }
        map<int,int> checks8;
        for(int i  = 6; i < 9; i++)
        {
            for(int j = 3; j < 6; j++)
            {
                if(board[i][j]=='.') continue;
                else{
                    if(checks8[board[i][j]]==1) return false;
                    checks8[board[i][j]]++;
                }
            }
        }
        map<int,int> checks9;
        for(int i  = 6; i < 9; i++)
        {
            map<int,int> checks;
            for(int j = 6; j < 9; j++)
            {
                if(board[i][j]=='.') continue;
                else{
                    if(checks9[board[i][j]]==1) return false;
                    checks9[board[i][j]]++;
                }
            }
        }
        return true;  
    }
};