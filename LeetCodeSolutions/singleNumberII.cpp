class Solution {
public:
    int singleNumber(vector<int>& nums) {
        if(nums.size()==1) return nums.size();
        sort(nums.begin(), nums.end());
        int used = nums[0];
        int counter = 0;
        if(nums[0]!=nums[1]) return nums[0];
        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i]== used)
            {
                counter++;
            }
            else{
                if(counter == 1) return nums[i-1];
                counter = 1;
                used = nums[i];
            }
        }
        return nums[nums.size()-1];
    }
};