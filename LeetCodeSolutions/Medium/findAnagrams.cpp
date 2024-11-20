class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> answer;
        if(p.length()>s.length()) return answer;
        vector<int> count(26, 0);
        for (char c : p) {
            count[c - 'a']++;
        }
        string sorts;
        for (int i = 0; i < 26; i++) 
        {
        sorts += string(count[i], 'a' + i);  
        }
        for(int i = 0; i <= s.length()-p.length(); i++)
        {
            vector<int> count2(26, 0);
            string sorted = s.substr(i,p.length());
            
            for (char c : sorted) {
                count2[c - 'a']++;
            }
            string sorte;
            for (int i = 0; i < 26; i++) 
            {
            sorte += string(count2[i], 'a' + i);  
            }
            if(sorte == sorts) answer.push_back(i);
        }
        return answer;
    }
};