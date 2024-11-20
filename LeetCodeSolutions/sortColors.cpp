class Solution {
public:
    void sortColors(vector<int>& nums) {
        vector<int> zero;
        vector<int> one;
        vector<int> two;
        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i]==0) zero.push_back(0);
            if(nums[i]==1) one.push_back(1);
            if(nums[i]==2) two.push_back(2);
        }
        zero.insert(zero.end(), one.begin(), one.end());
        zero.insert(zero.end(), two.begin(), two.end());
        nums=zero;

    }
};