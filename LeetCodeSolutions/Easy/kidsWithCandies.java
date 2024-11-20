class Solution {
    public List<Boolean> kidsWithCandies(int[] candies, int extraCandies) {
        int largest = 0;
        ArrayList<Boolean> answer = new ArrayList<Boolean>();
        for(int i = 0; i < candies.length; i++)
        {
            if(largest < candies[i]) largest = candies[i];
        }
        for(int i = 0; i < candies.length; i++)
        {
            if(candies[i]+extraCandies>=largest) answer.add(true);
            else{
                answer.add(false);
            }
        }
        return answer;
    }
}