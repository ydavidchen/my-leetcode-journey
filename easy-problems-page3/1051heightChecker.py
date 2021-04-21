class Solution:
    def heightChecker(self, heights: List[int]) -> int:
        numOkPairs = sum((a==b) for a,b in zip(heights, sorted(heights)))
        
        return len(heights) - numOkPairs