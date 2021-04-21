from collections import Counter
class Solution:
    def uniqueOccurrences(self, arr: List[int]) -> bool:
        d = Counter(arr)
        return len(d.values()) == len(set(d.values()))