class Solution {
    public int maximumWealth(int[][] accounts) {
        int answer = 0;
        for(int i = 0; i < accounts.length; i++)
        {
            int rich = 0;
            for(int j = 0; j < accounts[i].length; j++)
            {
                rich = rich + accounts[i][j];
            }
            if(rich>answer) answer = rich;
        }
        return answer;
    }
}