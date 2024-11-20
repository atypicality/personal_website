class Solution {
public:
    int addDigits(int num) {
        string n = to_string(num);
        while(n.length() > 1)
        {
            int val = 0;
            for(int i = 0; i < n.length(); i++)
            {
                val+=stoi(n.substr(i,1));
            }
            n = to_string(val);
        }
        if(n.length()==1) return stoi(n);
        return 0;
    }
};