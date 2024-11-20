class Solution {
public:
    int countDigits(int num) {
        int count = 0;
        string nums = to_string(num);
        for(int i = 0; i < nums.length(); i++)
        {
            if(num%stoi(nums.substr(i,1))==0) count++;
        }
        return count;
    }
};