class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int, int> hm;
        int res=0;
        
        for(int i=0; i<nums.size(); i++){
            res += hm[nums[i]];
            hm[nums[i]]++;
        }
        
        return res;
    }
};