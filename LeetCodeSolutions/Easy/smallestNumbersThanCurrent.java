class Solution {
    public int[] smallerNumbersThanCurrent(int[] nums) {
        
        int[] answer = new int[nums.length];

        for(int i = 0; i <nums.length;i++)
        {
            for(int j = 0; j < nums.length; j++)
            {
                if(j!=i && nums[j] < nums[i]) answer[i] = answer[i] + 1;
            }
        }
        return answer;
    }
}