class Solution {
    public int repeatedStringMatch(String a, String b) {
        if(b == "") return 0;
        String copy = a;
        int count = 1;
        while(a.length()<10001)
        {
            if(a.contains(b)) return count;
            a = a + copy;
            count++;
        }
        return -1;
    }
}