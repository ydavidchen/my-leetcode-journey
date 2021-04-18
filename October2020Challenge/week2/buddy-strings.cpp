class Solution {
public:
    bool buddyStrings(string A, string B) {
        if(A.size() != B.size()) return false;
        
        int diffIdx1=-1, diffIdx2=-1; //store loc where difference found
        
        unordered_set<char> setA;
        for(int k=0; k < A.size(); k++) {
            if(A[k] != B[k]) {
                if(diffIdx1 == -1) {
                    diffIdx1 = k;
                } else if(diffIdx2 == -1) {
                    diffIdx2 = k;
                } else {
                    return false;
                }
            }
            setA.insert(A[k]);
        }
        
        if(diffIdx1 != -1 && diffIdx2 != -1) {
            return A[diffIdx1] == B[diffIdx2] && A[diffIdx2] == B[diffIdx1];
        }
        
        if(diffIdx1 != -1) return false;
        return setA.size() < A.size();
    }
};
