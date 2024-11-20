class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        map<char, int> check;
        for(int i = 0; i < jewels.length(); i++)
        {
            check[jewels[i]] = 0;
        }

        for(int i = 0; i < stones.length(); i++)
        {   
            if(check.find(stones[i]) != check.end())
            {
                ++check[stones[i]];
            }
        }
        int count = 0;
        for(auto itr = check.begin(); itr!=check.end(); ++itr)
        {
            count = count + itr->second;
        }

        return count;

         
    }
    
};