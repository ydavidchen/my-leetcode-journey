class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        vector<int> decoded = {first};
        
        for(auto& x : encoded) {
            decoded.push_back(first ^= x);
        }
        
        return decoded;
    }
};