class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) { //O(n)
        vector<bool> output;
        int n = candies.size();
        int greatest = max(candies);
        
        for(int k=0; k < n; k++) {
            int candy = candies[k];
            output.push_back(candy+extraCandies >= greatest);
        }
        
        return output;
    }
    
    int max(vector<int>& array) { //O(n)
        int largestSoFar = array[0];
        for(int number : array) {
            if(number > largestSoFar) largestSoFar = number;
        }
        return largestSoFar;
    }
    
};