from typing import List

class Solution:
    def findLucky(self, arr: List[int]) -> int:
        arr.sort(reverse=True)
        for element in arr:
            x = arr.count(element)
            if x == element:
                return x
        return -1