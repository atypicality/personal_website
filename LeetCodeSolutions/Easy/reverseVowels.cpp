class Solution {
public:
    string reverseVowels(string s) {
        vector<char> test;
        for(int i = 0; i < s.length(); i++)
        {
            if(s.substr(i,1)=="a" || s.substr(i,1)=="A" || s.substr(i,1)=="e" || s.substr(i,1)=="E" || s.substr(i,1)=="i" || s.substr(i,1)=="I" || s.substr(i,1)=="o" || s.substr(i,1)=="O" || s.substr(i,1)=="u" || s.substr(i,1)=="U")
            {
                test.push_back(s[i]);
            }
        }
        int counter = test.size()-1;
        for(int i = 0; i < s.length(); i++)
        {
            if(s.substr(i,1)=="a" || s.substr(i,1)=="A" || s.substr(i,1)=="e" || s.substr(i,1)=="E" || s.substr(i,1)=="i" || s.substr(i,1)=="I" || s.substr(i,1)=="o" || s.substr(i,1)=="O" || s.substr(i,1)=="u" || s.substr(i,1)=="U")
            {
                s[i] =  test[counter];
                counter--;
            }
        }
        return s;
    }
};