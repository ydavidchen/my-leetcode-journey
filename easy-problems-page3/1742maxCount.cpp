class Solution {
public:
    int countBalls(int lowLimit, int highLimit) {
        vector<int> boxes(46, 0); //fill theoretical max 46 boxes with 0s
        
        for(int i=lowLimit; i<highLimit+1; i++) {
            int sum=0, n=i;
            while(n) {
                sum += n%10; //progressive addition
                n /= 10;
            }
            boxes[sum]++;
        }
        
        return *max_element(boxes.begin(), boxes.end());
    }
};