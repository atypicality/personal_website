class Solution {
    public int missingNumber(int[] nums) {
        Arrays.sort(nums);
        int counter = 0;
        for(int i = 0; i < nums.length; i++)
        {
            if(counter != nums[i])
            {
                return counter;
            }
            counter++;
        }
        return counter;
    }
}