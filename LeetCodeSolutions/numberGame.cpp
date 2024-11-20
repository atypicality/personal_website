class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        vector<int> answer;
        sort(nums.begin(), nums.end());
        int counter = 2;
        while(counter<=nums.size())
        {
            int a = nums[-2 + counter];
            answer.push_back(nums[-1+counter]);
            answer.push_back(a);
            counter = counter + 2;
        }
        return answer;
    }
};