class Solution {
public:
    bool isSameAfterReversals(int num) {
        string rev1 = to_string(num);
        std::reverse(rev1.begin(), rev1.end());
        int num2 = stoi(rev1);
        rev1 = to_string(num2);
        std::reverse(rev1.begin(), rev1.end());
        if(stoi(rev1) == num) return true;
        return false;

    }
};