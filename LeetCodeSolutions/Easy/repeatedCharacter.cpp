class Solution {
public:
    char repeatedCharacter(string s) {
        map<char, int> counts;
        for(int i = 0; i < s.length(); i++)
        {
            counts[s[i]]++;
            if(counts[s[i]]==2) return s[i];
        }
        return '0';
    }
};