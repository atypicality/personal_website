class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        sort(stones.begin(), stones.end());
        while(stones.size()>1)
        {
            int a = stones[stones.size()-1] - stones[stones.size()-2];
            if(a == 0)
            {
                stones.pop_back();
                stones.pop_back();
            }
            else
            {
                stones.pop_back();
                stones.pop_back();
                stones.push_back(a);
                sort(stones.begin(), stones.end());
            }
        }
        if(stones.size()>0) return stones[0];
        return 0;
    }
};