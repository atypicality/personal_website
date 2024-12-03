class Solution:
    def isPrefixOfWord(self, sentence: str, searchWord: str) -> int:
            words = sentence.split()
            counter = 0
            for word in words:
                counter +=1
                if len(word) >= len(searchWord) and word[:len(searchWord)] == searchWord: 
                    return counter
            return -1