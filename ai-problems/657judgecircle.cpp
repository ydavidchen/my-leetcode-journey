class Solution {
public:
    bool judgeCircle(string moves) {
        // O(n) time O1 space simulation approach
        int x=0, y=0;
        for(char move : moves) {
            if(move == 'L') x--;
            if(move == 'R') x++;
            if(move == 'D') y--;
            if(move == 'U') y++;
        }
        
        return (x == 0 && y ==0);
    }
};