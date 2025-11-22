class Solution:
    def sortedSquares(self, nums: List[int]) -> List[int]:
        result = [num ** 2 for num in nums]
        # result.append()
        result.sort()
        return result