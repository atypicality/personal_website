class Solution {
    public boolean isPalindrome(String s) {
        s = s.replaceAll("[^a-zA-Z0-9]", "");
        s=s.toLowerCase();
        while(s.length()>=3)
        {
            if(s.substring(0,1).equals(s.substring(s.length()-1,s.length()))==false)
            {
                return false;
            }                  
            s = s.substring(1,s.length()-1);
            
            
        }
        if(s.length()==2)
        {
            if(s.substring(0,1).equals(s.substring(s.length()-1,s.length()))==false) return false;
        }
        return true;
    }
}