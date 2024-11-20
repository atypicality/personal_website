class Solution {
public:
    int pivotInteger(int n) {
        int total = 0;
        int total2 = 0;
        if(n==1) return true;
        for(int i = 0; i < n-1; i++)
        {
            total = total + i;
            for(int j = i; j<=n; j++)
            {
                total2 = total2 + j;
            }
            if(total == total2) return i;
            total2 = 0;
        }
        return -1;
    }
};