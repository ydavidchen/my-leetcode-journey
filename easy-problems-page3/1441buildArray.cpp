/*
Given an array target and an integer n. In each iteration, you will read a number from  list = {1,2,3..., n}.

Input: target = [1,3], n = 3
Output: ["Push","Push","Pop","Push"]
*/

class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> res;
        n=1;
        
        for(int i=0; i<target.size();i++) {
            while(target[i] != n) {
                res.push_back("Push");
                res.push_back("Pop");
                n++;
            }
            
            res.push_back("Push");
            n++;
        }
        
        return res;
    }
};