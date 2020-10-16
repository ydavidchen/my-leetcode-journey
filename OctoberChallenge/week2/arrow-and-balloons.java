class Solution {
    public int findMinArrowShots(int[][] points) {
        int n = points.length;
        if(n == 0) return 0;
        
        Arrays.sort(points, Comparator.comparingDouble(x->x[0])); //nested array sort
        int xend_k=points[0][1];
        int count = 1; 
        
        for(int k=1; k < n; k++) {
            if(xend_k < points[k][0]) {
                xend_k = points[k][1];
                count++;
            }
        }
        
        return count;
    }
}
