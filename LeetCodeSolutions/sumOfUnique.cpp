class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        map<int,int> answer;

        for(int i = 0; i < nums.size(); i++)
        {
            answer[nums[i]]++;
        }
        int sum = 0;
        for(auto i:answer)
        if(i.second==1) sum = sum + i.first;
        return sum;
        }
};