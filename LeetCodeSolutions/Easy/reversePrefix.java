class Solution {
    public String reversePrefix(String word, char ch) {
        if(word.contains(ch + "")==false) return word;
        String test = "";
        int test2 = 0;
        for(int i = 0; i < word.length(); i++)
        {
            if(word.substring(i,i+1).equals(ch + ""))
            {
                test2 = i;
                i=word.length();
            } 
        }
        for(int i = test2; i >= 0; i--)
        {
            test = test + word.substring(i,i+1);
        }
        return test + word.substring(test2+1);
    }
}