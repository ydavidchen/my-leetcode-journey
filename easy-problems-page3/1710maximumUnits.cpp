/*
You are assigned to put some amount of boxes onto one truck. 
You are given a 2D array boxTypes, where boxTypes[i] = [numberOfBoxesi, numberOfUnitsPerBoxi]:

    numberOfBoxesi is the number of boxes of type i.
    numberOfUnitsPerBoxi is the number of units in each box of the type i.

You are also given an integer truckSize, 
which is the maximum number of boxes that can be put on the truck. 
You can choose any boxes to put on the truck as long as 
the number of boxes does not exceed truckSize.

Return the maximum total number of units that can be put on the truck.


Example 1:
    Input: boxTypes = [[1,3],[2,2],[3,1]], truckSize = 4
    Output: 8
    (1 * 3) + (2 * 2) + (1 * 1) = 8
*/

class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        sort(boxTypes.begin(), boxTypes.end(), cmp);
        
        int res=0;
        for(auto & box : boxTypes) {
            if(truckSize > box[0]) {
                truckSize -= box[0];
                res += box[0] * box[1];
            } else {
                res += truckSize * box[1];
                return res;
            }
        }
        
        return res;
        
    }
    
    bool static cmp(vector<int>& a, vector<int>& b){
        // Ref: www.geeksforgeeks.org/sorting-a-map-by-value-in-c-stl/
        return a[1] > b[1];
    }
};