class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string prefix = "";
        if(strs.size() == 1) return strs[0];
        for(unsigned int i = 0; i <= strs[0].length(); i++)
        {
            prefix = strs[0].substr(0,i);
            for(unsigned int j = 1; j < strs.size(); j++)
            {
                if(strs[j].substr(0,i)!=prefix) return prefix.substr(0,prefix.length()-1); 
            }
        }


        return prefix;
    }
};