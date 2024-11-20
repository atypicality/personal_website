class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());        
        double counter = 1;
        int answer = nums[0];
        for(unsigned int i = 0; i < nums.size()-1; i++)
        {
            if(nums[i]==nums[i+1]) counter++;
            if(counter > ((double)nums.size()/2)) 
            {
                return nums[i];
            }
            if(nums[i]!=nums[i+1]) 
            {
                counter = 1;
            }
        }
        return answer;
    }
};