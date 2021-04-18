class Solution(object):
    def kidsWithCandies(self, candies, extraCandies):
        """
        :type candies: List[int]
        :type extraCandies: int
        :rtype: List[bool]
        """
        n = len(candies); #O(1)
        greatest = max(candies); #O(1)
        output = [(candy+extraCandies) >= greatest for candy in candies]; #O(n)
        return output;