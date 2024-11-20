class Solution {
public:
    string finalString(string s) {
        
        int removed = 0;
        for(int i = 0; i < s.length() + removed; i++)
        {
            if(s.substr(i-removed,1)=="i"){
                std::string test = s.substr(0,i-removed);
                reverse(test.begin(), test.end());
                s= test + s.substr(i-removed+1,s.length());
                removed++;
            }
        }
        return s;
    }
};