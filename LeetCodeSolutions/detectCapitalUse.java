class Solution {
    public boolean detectCapitalUse(String word) {
        String lower = word.toLowerCase();
        if(word.equals(lower)) return true;
        String upper = word.toUpperCase();
        if(word.equals(upper)) return true;
        if(word.substring(0,1).equals(upper.substring(0,1)) && word.substring(1,word.length()).equals(lower.substring(1,lower.length()))) return true;
        return false;
    }
}