class Solution {
    public int[] searchRange(int[] nums, int target) {
        int[] res = {-1,-1};
        if(nums.length==0) return res;
        int start = 0;
        int end = 0;
        for(int i = 0; i < nums.length; i++)
        {
            if(target == nums[i] && res[0] != -1)
            {
                res[1] = i;
            }
            if(target == nums[i] && res[0] == -1)
            {
                res[0] = i;
            }
        }
            if(res[0]!=-1 && res[1]==-1) res[1] = res[0];
            return res;
    }
}
