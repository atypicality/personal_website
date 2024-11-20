class Solution {
    public int removeElement(int[] nums, int val) {
        for(int i = 0; i <nums.length; i++)
        {
            if(nums[i]==val) nums[i] = 51;
        }
        Arrays.sort(nums);
        for(int i = 0; i< nums.length; i++)
        {
            if(nums[i]==51) return i;
        }
        return nums.length;
    }
}