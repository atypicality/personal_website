class Solution {
    public long maximumHappinessSum(int[] happiness, int k) 
    {
        long total = 0;
        long sub = 0;
        Arrays.sort(happiness);
        for(long i = happiness.length -1 ; i > happiness.length - 1 - k; i--)
        {
            if((long)happiness[(int)i] - sub >= 0) total = total + (long)happiness[(int)i] - sub;
            else
            {
                total = total;
            }
            sub++;
        }
        return total;
    }
}