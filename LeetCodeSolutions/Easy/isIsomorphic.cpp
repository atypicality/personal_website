class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char, char> check;

        for(int i = 0; i < s.length(); i++)
        {
            if(check[s[i]] == '\0' || check[s[i]] == t[i])
            { 
                check[s[i]] = t[i];
            }
            else{
                return false;
            }
        }
        map<char, char> checks;

        for(int i = 0; i < s.length(); i++)
        {
            if(checks[t[i]] == '\0' || checks[t[i]] == s[i])
            { 
                checks[t[i]] = s[i];
            }
            else{
                return false;
            }
        }
        return true;
    }
};