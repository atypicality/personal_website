class Solution {
public:
    int maxSatisfaction(vector<int>& satisfaction) {
        sort(satisfaction.begin(), satisfaction.end());
        int output = 0;
        for(int i = 0; i<satisfaction.size(); i++)
        {
            int value = 0;
            int counter = 1;
            for(int j = i; j < satisfaction.size(); j++)
            {
                
                value = value + satisfaction[j] * counter;
                counter++;
            }
            if(value>output) output = value;
        }
        return output;
    }
};