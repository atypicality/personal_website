class Solution {
    public int finalValueAfterOperations(String[] operations) {
        int total = 0;
        for(int i = 0; i<operations.length; i++)
        {
            if(operations[i].contains("++")) total = total + 1;
            if(operations[i].contains("--")) total = total - 1;

        }
        return total;
    }
}