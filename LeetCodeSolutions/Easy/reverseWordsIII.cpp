class Solution {
public:
    string reverseWords(string s) {
        std::string test = "";
        int index = 0;
        for(int i = 0; i <= s.length(); i++)
        {
            if(s.substr(i,1)==" " || i==s.length())
            {
                std::string reverso = s.substr(index,i-index);
                reverse(reverso.begin(), reverso.end());
                if(i!=s.length())test = test + reverso + " ";
                else{
                    test = test + reverso;
                }
                index = i + 1;
            }
        }
        return test;
    }
};