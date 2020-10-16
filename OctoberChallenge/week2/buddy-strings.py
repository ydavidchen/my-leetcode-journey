class Solution(object):
    def buddyStrings(self, A, B):
        """
        :type A: str
        :type B: str
        :rtype: bool
        """
        if len(A)!= len(B): 
            return False;
        
        diffIdx1=-1; diffIdx2=-1;
        
        setA = [];
        for k in range(len(A)):
            if A[k] != B[k]:
                if diffIdx1 == -1:
                    diffIdx1 = k;
                elif diffIdx2 == -1:
                    diffIdx2 = k;
                else:
                    return False;
            
            setA.append(A[k]);
        
        if diffIdx1 != -1 and diffIdx2 != -1:
            return (A[diffIdx1] == B[diffIdx2] and A[diffIdx2] == B[diffIdx1]);
        
        if diffIdx1 != -1: 
            return False;
        
        return len(setA) < len(A);
