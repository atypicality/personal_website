class Solution {
public:
    string sortVowels(string s) {
        vector<char> vowel;
        for(int i = 0; i < s.length(); i++)
        {
            if(s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U' || s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' ) {
                vowel.push_back(s[i]);
            }
        }
        sort(vowel.begin(), vowel.end());
        int count = 0;
        for(int i = 0; i < s.length(); i++)
        {
            
            if(s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U' || s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' ) {
                s[i] = vowel[count];
                count++;
            }
        }     
        return s; 
    }
};