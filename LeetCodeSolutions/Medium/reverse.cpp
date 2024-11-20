class Solution {
public:
    int reverse(int x) {
        // 2147483648
        if(x>0)
        {
            string answer = to_string(x);
            std::reverse(answer.begin(), answer.end());
            long long a = stoll(answer);
            if(a > 2147483648-1) return 0;
            else{
                int b = stoi(answer);
                return b;
            }
        }
        else{
            if(x==-2147483648) return 0; //only case where the -1 doesnt work
            string answer = to_string(x*-1);
            std::reverse(answer.begin(), answer.end());
            answer = "-" + answer;
            long long a = stoll(answer);
            if(a < -2147483648) return 0;
            else{
                int b = stoi(answer);
                return b;
            }
        }
    }
};