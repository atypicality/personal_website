from typing import List

class Solution:
    def replaceWords(self, dictionary: List[str], sentence: str) -> str:
        words = sentence.split()
        dictionary = sorted(dictionary, key=len)
        answer= ""
        for element in words:
            for word in dictionary:
                if element.startswith(word):
                    element = word
            answer += element + " "
        return answer.strip()