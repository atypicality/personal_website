from typing import List

class Solution:
    def findWords(self, words: List[str]) -> List[str]:
        f = "qwertyuiopQWERTYUIOP"
        s = "asdfghjklASDFGHJKL"
        t = "zxcvbnmZXCVBNM"

        ben = []

        for element in words:
            test = True
            test1 = True
            test2 = True
            for letter in element:
                if letter not in f:
                    test = False
                if letter not in s:
                    test1 = False
                if letter not in t:
                    test2 = False
            if test == True or test1 == True or test2 == True:
                ben.append(element)
        return ben
