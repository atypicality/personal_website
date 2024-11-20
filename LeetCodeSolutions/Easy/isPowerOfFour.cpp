class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n==1) return true;
        if(n <= 0 || n%4 != 0) return false;
        long i = 1;
        while(i <= (long)n)
        {
            if(i==(long)n) return true;
            i *=4;
        }
       
        return false;
    }
};