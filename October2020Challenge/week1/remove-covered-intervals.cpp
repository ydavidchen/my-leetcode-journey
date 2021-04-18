class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.begin());
        printVector(intervals);

        int num = 0;
        int b_max = 0;

        for(vector<int> interval : intervals) {
            if(b_max < interval[1]) {
                b_max = interval[1];
            } else {
                num++;
            }
        }

        return intervals.size()+1 - num;
    }

    static bool cmp(vector<int> a, vector<int> b){
        // if(a[0] == a[0]) return a[1] < b[1];
        return a[0] > b[0];
    }

    void printVector(vector < vector <int> > a){
        for(int i = 0; i < a.size(); i++){
            cout << a[i][0] << " " << a[i][1] << endl;
        }
        cout << endl;
    }
};
