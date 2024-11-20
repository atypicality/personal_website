class Solution {

public:
    bool rotateString(string s, string goal)
    {
    int shift = 0;
    while(shift!=s.length())
    {
        if(s==goal) return true;
        s = s.substr(1,s.length()-1) + s.substr(0,1);
        shift++;
    }    
    return false;
    }
};