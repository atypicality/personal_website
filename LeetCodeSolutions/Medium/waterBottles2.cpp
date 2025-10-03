class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) {
        int empty=0;
        int exchange;
        int drunk = 0;
        while(numBottles!=0)
        {
            empty += numBottles;
            drunk += numBottles;
            numBottles = 0;
            exchange = empty-numExchange;
            if(exchange >= 0)
            {
                empty-=numExchange;
                numExchange++;
                numBottles++;
            }
        }
        return drunk;
    }
};