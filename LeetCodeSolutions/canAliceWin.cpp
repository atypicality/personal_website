class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int a = 0;
        int b = 0;
        int c = 0;
        sort(nums.begin(), nums.end());
        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i]>=10) 
            {
                c = i;
                break;
            }
            a +=nums[i];
        }
        for(int i = c; i < nums.size(); i++)
        {
            b +=nums[i];
        }
        if(c==0) return true;
        if(a==b) return false;
        return true;
    }
};