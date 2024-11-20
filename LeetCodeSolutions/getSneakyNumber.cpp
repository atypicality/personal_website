class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        map<int,int> answer;
        for(int i = 0; i < nums.size(); i++)
        {
            answer[nums[i]]++;
        }
        vector<int> respond;
        for(int i = 0; i < nums.size(); i++)
        {
            if(answer[nums[i]]==2)
            {
                answer[nums[i]]++;
                respond.push_back(nums[i]);
            }
            if(respond.size()==2) break;
        }
        return respond;
    }
};