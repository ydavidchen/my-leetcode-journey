class RecentCounter(object):

    def __init__(self):
        self.counter = 0;
        self.requests = [];

    def ping(self, t):
        """
        Adds a new request at time t (ms)
        :param: type t: int
        :param: rtype: int
        :returns: Number of requests in the past self.SEC seconds
        """
        self.requests.append(t);

        # Refresh: Impose filter:
        self.requests = [x for x in self.requests if (x >= t-3000)];

        # Count
        self.counter = len(self.requests);

        return self.counter;



# Your RecentCounter object will be instantiated and called as such:
# obj = RecentCounter()
# param_1 = obj.ping(t)
