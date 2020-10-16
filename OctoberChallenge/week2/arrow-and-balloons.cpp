class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        int n = points.size();
        if(n == 0) return 0;
        
        sort(points.begin(), points.end(), cmp);
        int xend_k = points[0][1];
        
        int count = 1;
        for(int k=1; k < n; k++) {
            if(xend_k < points[k][0]) {
                xend_k = points[k][1];
                count++;
            }
        }
        
        return count;
    }
    
    static bool cmp(vector<int>& p , vector<int>& q) {
        return p[1] < q[1]; 
    }
};
