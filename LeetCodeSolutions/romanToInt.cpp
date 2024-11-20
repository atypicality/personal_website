class Solution {
public:
    int romanToInt(string s) {
        int x = 0;
        for(int i = 0; i < s.length(); i++)
        {
            if(i!=0)
            {
                if(s[i-1]=='I' && (s[i]=='V' || s[i]=='X'))
                {
                    x-=2;
                } 
                if(s[i-1]=='X' && (s[i]=='L' || s[i]=='C'))
                {
                    x-=20;
                } 
                if(s[i-1]=='C' && (s[i]=='D' || s[i]=='M'))
                {
                    x-=200;
                } 
            }
            if(s[i]=='I') x+=1;
            if(s[i]=='V') x+=5;
            if(s[i]=='X') x+=10;
            if(s[i]=='L') x+=50;
            if(s[i]=='C') x+=100;
            if(s[i]=='D') x+=500;
            if(s[i]=='M') x+=1000;

        }
        return x;
    }
};