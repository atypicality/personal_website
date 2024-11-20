class Solution {
    public int mostWordsFound(String[] sentences) {
        int answer = 0;
        for(int i = 0; i < sentences.length; i++)
        {
            int words = 1;
            for(int j = 0; j < sentences[i].length(); j++)
            {
                if(sentences[i].charAt(j)==' ') words++;
            }
            if(sentences[i].length()==0) words = 0;
            if(answer < words) answer = words;
        }
        return answer;
    }
}