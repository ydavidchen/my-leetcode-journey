class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int maxSoFar = -1;
        
        for(int k=arr.size()-1; k >= 0; k--) {
            int curr = arr[k];
            arr[k] = maxSoFar;
            maxSoFar = max(maxSoFar, curr);
        }
        
        return arr;
    }
};