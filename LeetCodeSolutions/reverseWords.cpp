class Solution {
public:
    string reverseWords(string s) {
        vector<string> answer;
        string currentWord = "";
        for(int i = 0; i < s.length(); i++)
        {

            if (i==s.length()-1)
            {
                if(s.substr(i,1)==" ")
                {
                    answer.push_back(currentWord);
                    break;
                }
                currentWord = currentWord + s[i];
                answer.push_back(currentWord);
                break;
            }
            else if(s.substr(i,1)!=" ") currentWord = currentWord + s[i];
            else if (s.substr(i,1)==" " && currentWord != "" ) 
            {
                answer.push_back(currentWord);
                currentWord = "";
            }
            else currentWord = "";
        }
        string reversed = "";
        for(int i = answer.size()-1; i >= 0; i--)
        {
            reversed = reversed + answer[i] + " ";
        }
        if(reversed.substr(0,1)==" ") return reversed.substr(1,reversed.length()-2);
        return reversed.substr(0,reversed.length()-1);
    }
};