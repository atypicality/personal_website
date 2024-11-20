class Solution {
public:
    int commonFactors(int a, int b) {
        if(a>b)
        {
            int counter = 0;
        for(int i = 1; i <= b; i++)
        {
            if(a%i==0 && b%i == 0) counter++;
        }
        return counter;
        }

        int counter = 0;
        for(int i = 1; i <= a; i++)
        {
            if(a%i==0 && b%i == 0) counter++;
        }
        return counter;

    }
};