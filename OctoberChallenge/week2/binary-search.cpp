class Solution {
public:
    int search(vector<int>& nums, int target) {
        // Nums already sorted
        // Goal: O(log n) or better
        // Ref: Wikipedia binary search pseudocode
        
        int l=0, r=nums.size()-1;
        // if(r < l) return -1;
        
        while(r >= l) {
            int m = floor((r+l) / 2);
        
            if(nums[m] < target) {
                l = m + 1;
            } else if(nums[m] > target) {
                r = m - 1;
            } else {
                return m;   
            }
        }
        
        return -1;
    }
};
