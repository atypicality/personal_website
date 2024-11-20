class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        if(nums.size()<3) return nums[nums.size()-1];
        int counter = 1;
        for(int i = nums.size()-2; i>=0; i--)
        {
            if(nums[i] != nums[i+1]) counter++;
            if(counter==3) return nums[i];
        }
        return nums[nums.size()-1];
    }
};