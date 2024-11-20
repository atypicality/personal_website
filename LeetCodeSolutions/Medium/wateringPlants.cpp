class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity) {
        int step = 0;
        int current = capacity;
        for(int i = 0; i < plants.size(); i++)
        {
            if(current < plants[i]) 
            {
                step = step + i + i + 1;
                current = capacity;
                cout << step << endl;
            }
            else{
                step++;
                cout << step << endl;
            }
            current = current - plants[i];
        }
        return step;
    }
};