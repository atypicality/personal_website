class Solution {
public:
    int firstUniqChar(string s) {
        vector<char> bad; 
        for(int i = 0; i < s.length(); i++)
        {
            bool checker = true;
            for(int j = i + 1; j < s.length(); j++)
            {
                if(s[i] == s[j]) 
                {
                    bad.push_back(s[i]);
                    checker = false;
                    break;
                }
            }
            auto it = find(bad.begin(), bad.end(), s[i]);
            if(checker==true && it==bad.end()) return i;
        }

        return -1;
    }
};