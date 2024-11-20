class Solution {
    public int countPairs(List<Integer> nums, int target) {
        int answer = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            for(int j = i+1; j < nums.size(); j++)
            {
                if(i >=0 && j > i && nums.get(i) + nums.get(j) < target) answer++;
            }
        }
        return answer;
    }
}