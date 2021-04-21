"""
Given an array arr, replace every element in that array with 
the greatest element among the elements to its right, 
and replace the last element with -1.
After doing so, return the array.
"""

class Solution:
    def replaceElements(self, arr: List[int]) -> List[int]:
        """ Use the 2 Hints """
        maxSoFar = -1
        
        for k in range(len(arr)-1, 0-1, -1):
            tmp = arr[k]
            arr[k] = maxSoFar
            maxSoFar = max(maxSoFar, tmp)
        
        return arr;