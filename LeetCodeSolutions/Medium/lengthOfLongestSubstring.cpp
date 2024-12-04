class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.length() == 0 || s.length() == 1) return s.length();
        int max = 0;
        for(int i = 0; i < s.length()-1; i++)
        {
            map<char, int> count;
            int length = 0;
            for(int j = i; j < s.length(); j++)
            {
                length++;
                count[s[j]]++;
                if(count[s[j]]>1) 
                {
                    length = length-1;
                    break;
                }
            }
            if(length > max) max = length;
            if(max>=s.length()-i) break;
        }
        return max;
    }
};