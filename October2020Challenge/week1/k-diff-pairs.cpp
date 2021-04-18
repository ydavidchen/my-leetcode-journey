class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        int count = 0;

        // Ensure numbers are small to large:
        sort(nums.begin(), nums.end());

        int j = 0;
        int tmp = INT_MAX;

        for(int i=0; i < nums.size(); i++) {
            // Increment-iterate j if condition doesn't meet
            while (j < i && (nums[i]-nums[j]>k)) j++;

            // Increase count iff non-self and diffK condition meets
            if(j != i && tmp != nums[j] && (nums[i]-nums[j]==k)) {
                count++;
                tmp = nums[j];
            }
        }

        return count;
    }
};
