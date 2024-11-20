class Solution {
    public int removeDuplicates(int[] nums) {
        int[] test = new int[nums.length];
        for(int i = 0; i < test.length; i++)
        {
            test[i] = 999;
        }
        test[0] = nums[0];
        int counter = 1;
        boolean checker = true;
        for(int i = 0; i < nums.length; i++)
        {
            for(int j = 0; j < test.length; j++)
            {
                if(test[j]==nums[i])
                {
                    checker = false;
                }
            }
            if(checker == true)
            {
            test[counter] = nums[i];
            counter++;
            }
            checker = true;
        }
        for(int i = 0; i < counter; i++)
        {
            nums[i] = test[i];
        }
        return counter;
        
    }
}