class Solution(object):
    def bitwiseComplement(self, N):
        """
        :type N: int
        :rtype: int
        """
        num = 1;
        while N > num:
            num = 2 * num + 1;
        return num - N;
