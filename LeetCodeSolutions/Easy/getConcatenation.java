class Solution {
    public int[] getConcatenation(int[] nums) {
        int[] test = new int[nums.length * 2];
        for(int i = 0; i<nums.length; i++)
        {
            test[i] = nums[i];
        }
        for(int i = 0; i<nums.length; i++)
        {
            test[i+nums.length] = nums[i];
        }
        return test;
    }
}