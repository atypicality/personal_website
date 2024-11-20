class Solution {
    public int[] shuffle(int[] nums, int n) {
        int[] test = new int[nums.length];
        int counter = 0;
        int counter2 = nums.length/2;
            for(int i = 0; i < test.length; i++)
            {
                if(i%2==0) 
                {
                    test[i]=nums[counter];
                    counter++;
                }
                else
                {
                    test[i]=nums[counter2];
                    counter2++;
                }
            }
             return test;
        }
    }
