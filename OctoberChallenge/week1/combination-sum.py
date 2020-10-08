class Solution(object):
    def combinationSum(self, candidates, target):
        """
        :type candidates: List[int]
        :type target: int
        :rtype: List[List[int]]
        """
        if len(candidates) == 0:
            return [[]];

        ## Member variables & methods in current scope
        res, tmp = [[]], [];
        def findCandidatesRecursive(lst, s, i):
            """ Recursive & back-tracking """
            if s < 0:
                return None;

            if s == 0:
                res.append(tmp);
                return None;

            while i < len(lst) and s-lst[i] >= 0:
                tmp.append(lst[i]);
                findCandidatesRecursive(lst, s-lst[i], i);
                i += 1;
                tmp.pop();

        candidates.sort(); #O(nlgn)
        findCandidatesRecursive(candidates, target, 0); #side effects only
        return res;
