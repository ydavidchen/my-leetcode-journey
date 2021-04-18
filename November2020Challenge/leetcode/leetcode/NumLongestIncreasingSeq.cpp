//
//  NumLongestIncreasingSeq.cpp
//  leetcode
//
//  Created by DavidKevinChen on 10/30/20.
//

#include <iostream>
#include <vector>
#include <algorithm>
using std::cout;
using std::endl;
using std::vector;
using std::max;

class NumLongestIncreasingSeq {
public:
    int findNumberOfLIS(vector<int>& nums) {
        int n = nums.size();
        if(n < 2) return n;
                
        vector<int> sizes(n, 0), cnts(n, 1);
        for(int i=0; i < n; i++) {
            for(int j=0; j < i; j++) {
                if(nums[j] < nums[i]) {
                    if(sizes[j] >= sizes[i]) {
                        sizes[i] = sizes[j] + 1;
                        cnts[i] = cnts[j];
                    } else if(sizes[j] + 1 == sizes[i]) {
                        cnts[i] += cnts[j];
                    }
                }
            }
        }
        
        int longestSoFar=0, res=0;
        for(int size: sizes) longestSoFar = max(longestSoFar, size);
        for(int i=0; i < n; i++) {
            if(sizes[i] == longestSoFar) res += cnts[i];
        }
        return res;
        
    }
};

/*
int main() {
    vector<int> nums1 = {1,3,5,4,7}, nums2 = {2,2,2,2,2};
    NumLongestIncreasingSeq obj = NumLongestIncreasingSeq();
    cout << obj.findNumberOfLIS(nums1) << endl;
    cout << obj.findNumberOfLIS(nums2) << endl;
    return 0;
}
*/
