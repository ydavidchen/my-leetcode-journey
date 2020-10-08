class RecentCounter {
public:
    int count = 0;
    vector<int> requests = {};

    RecentCounter() {}

    int ping(int t) {
        requests.push_back(t);

        vector<int> newRequests={};

        for(int x : requests) {
            if (x >= t-3000) newRequests.push_back(x);
        }

        requests = newRequests;
        count = requests.size();

        return count;
    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */
