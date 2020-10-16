class Solution:
    def findMinArrowShots(self, points: List[List[int]]) -> int:
        n = len(points);
        if n == 0: 
            return 0;
        
        points.sort();
        xend_k = points[0][1];
        
        count = 1; 
        for k in range(1, n):
            if xend_k < points[k][0]: 
                xend_k = points[k][1];
                count += 1;
            
        return count;
