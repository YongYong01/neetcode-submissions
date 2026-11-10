class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<int, vector<int>>> pq;
        vector<vector<int>> result;
        for(auto point : points){
            double dist = point[0]*point[0]+point[1]*point[1];
            pq.push({dist, point});
            if(pq.size() > k){
                pq.pop();
            }
        }
        while (!pq.empty()) {
            result.push_back(pq.top().second);
            pq.pop();
        }
        return result;
    }
};
