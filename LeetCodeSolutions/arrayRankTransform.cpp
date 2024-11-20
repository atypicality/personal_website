class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int> dub = arr;
        sort(dub.begin(), dub.end());
        map<int, int> rank;
        int counter = 0;
        for(int i = 1; i < dub.size() + 1; i++)
        {
            if(rank.find(dub[i-1])== rank.end())
            {
                rank[dub[i-1]] = i - counter;
            }
            else{
                counter++;
            }
        }

        for(int i = 0; i < arr.size(); i++)
        {
            arr[i] = rank[arr[i]];
        }
        return arr;
    }
};