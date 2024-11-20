class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        int poison = 0;
        for(int i = 0; i<timeSeries.size()-1; i++)
        {
            if(timeSeries[i+1] - timeSeries[i] > duration) poison+=duration;
            else{
                poison+=(timeSeries[i+1] - timeSeries[i]);
            }
        }   
        return poison + duration;
    }
};