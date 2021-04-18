class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int res=0;
        
        unordered_set<char> us_jewels;
        for(char jewel : jewels) us_jewels.insert(jewel);
        
        for(char stone : stones) {
            if(us_jewels.count(stone)) res++; //attention
        }
        
        return res;
    }
};