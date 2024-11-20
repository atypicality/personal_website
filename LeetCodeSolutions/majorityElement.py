from typing import List

class Solution:
    def majorityElement(self, nums: List[int]) -> List[int]:
        answer = []
        for element in nums:
            if nums.count(element) > len(nums)/3 and element not in answer:
                answer.append(element)

        return answer