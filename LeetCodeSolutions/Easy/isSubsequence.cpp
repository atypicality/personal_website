class Solution {
public:
    bool isSubsequence(string s, string t) {
        if(t.length()<s.length()) return false; //makes sure t is the same size or more than s
        if(s.length()==0) return true; //this will always be true
        int increment = 0;
        string news = "";
        for(int i = 0; i < t.length(); i++)
        {
            if(t[i]==s[increment] && increment != s.length())
            {
                increment++;
                news = news + t[i];
            }
        }
        if(news==s) return true;
        return false;
    }
};