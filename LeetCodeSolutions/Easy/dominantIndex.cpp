class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        vector<int> dub = nums;
        sort(dub.begin(), dub.end());
        if(dub[dub.size()-1] >= 2 * dub[dub.size()-2])
        {
            for(int i = 0; i < nums.size(); i++)
            {
                if(nums[i] == dub[dub.size()-1]) return i;
            }
        }
        return -1;
    }
};