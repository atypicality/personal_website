class Solution {
public:
    string sortSentence(string s) {
        string arr[10];
        string test = "";
        for(int i = 0; i < s.length(); i++)
        {
            if(s[i]=='1' || s[i]=='2'|| s[i]=='3'|| s[i]=='4'|| s[i]=='5'|| s[i]=='6'|| s[i]=='7'|| s[i]=='8'|| s[i]=='9'){
                arr[stoi(s.substr(i,1))] = test;
                test = "";
            }
            else{
            if(s.substr(i,1)!=" ")test = test + s[i];
            }
        }
        string answer = "";
        for(int i = 0; i <=9; i++)
        {
            if(arr[i]!="") answer = answer + " " + arr[i];
        }
        return answer.substr(1,answer.length()-1);
    }
};