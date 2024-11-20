class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        sort(capacity.begin(), capacity.end(), std::greater<int>());
        int total = 0;
        for(int i = 0; i < apple.size();i++)
        {
            total +=apple[i];
        }
        int total2 = 0;
        for(int i = 0; i < capacity.size();i++)
        {
            total2 +=capacity[i];
            if(total2 >=total) return i + 1;
        }
        return capacity.size();

    }
};