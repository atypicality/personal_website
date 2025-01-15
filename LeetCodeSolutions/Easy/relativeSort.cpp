class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        vector<int> specific;

        for(int i = 0; i < arr2.size(); i++)
        {
            for(int j = 0; j < arr1.size(); j++)
            {
                if(arr1[j]==arr2[i]) specific.push_back(arr1[j]);
            }
        }
        int start = specific.size();
        bool found = false;
        for(int i = 0; i < arr1.size(); i++)
        {
            found = false;
            for(int j = 0; j < arr2.size(); j++)
            {
                if(arr1[i]==arr2[j]) 
                {
                    found = true;
                    break;
                }
            }

            if(found==false) specific.push_back(arr1[i]);
        }
        sort(specific.begin()+start, specific.end());
        return specific;
    }
};