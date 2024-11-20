class Solution {
    public void rotate(int[] nums, int k) {
        int[] test = new int[nums.length];

        for(int i = 0; i < nums.length; i++)
        {
            if(i+k%nums.length < nums.length) test[i+k%nums.length] = nums[i];
            if(i + k%nums.length >= nums.length) test[0+((i+k%nums.length)-nums.length)] = nums[i];
        }
        for(int i  = 0; i < test.length; i++)
        {
            nums[i] = test[i];
        }
    }
}

