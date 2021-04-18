class Solution {
public:
    int bitwiseComplement(int N) {
        int num = 1;
        while(N > num) {
            num = 2 * num + 1;
        }

        return N^num;
    }
};
