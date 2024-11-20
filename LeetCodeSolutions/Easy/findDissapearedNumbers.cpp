class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        map<int,int> numbers;
        for(int i = 1; i < nums.size()+1; i++)
        {
            numbers[i] = 0;
        } 

        for(int i = 0; i < nums.size(); i++)
        {
            ++numbers[nums[i]];
        }

        vector<int> answer;
        for(map<int,int>::iterator itr = numbers.begin(); itr!=numbers.end(); ++itr)
        {
            cout << itr->first << " " <<itr->second << endl;

            if(itr->second == 0) 
            {
                answer.push_back(itr->first);
            }
            
        }
        return answer;

    }
};