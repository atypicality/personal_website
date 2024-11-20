class Solution {
    public List<Integer> findWordsContaining(String[] words, char x) {
        ArrayList<Integer> test = new ArrayList<Integer>();
        for(int i = 0; i < words.length; i++)
        {
            if(words[i].contains(x + ""))test.add(i);
        }
        return test;
    }
}