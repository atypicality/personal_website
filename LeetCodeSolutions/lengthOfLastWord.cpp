class Solution {
public:
    int lengthOfLastWord(string s) {
        
        int counter = 0;
        int index = s.length()-1;
        if(s.substr(s.length()-1,1)==" ")
        {
            for(int i = s.length()-1; i >= 0; i--)
            {
                if(s.substr(i,1)!=" ")
                {
                    index = i;
                    break;
                } 
            }
        }
        
        for(int i = index; i >=0; i--)
        {
            if(s.substr(i,1)!=" ") counter++;
            else{
                return counter;
            }
        }
        return counter;
    }
};