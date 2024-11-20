class Solution {
public:
    int countSegments(string s) {
        if(s.length()==0) return 0;
        string individual = "";
        int answer = 0;
        for(int i = 0; i < s.length(); i++)
        {
            if(s.substr(i,1)!=" ") individual = individual + s[i];
            if(s.substr(i,1)==" " && individual!= "" || i==s.length()-1 && individual!= "")
            {
                answer++;
                individual = "";
            }
        } 
        return answer;
    }
};