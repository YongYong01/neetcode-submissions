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
            /*
            if(pq.empty() || sqrt(pq.top()[0]*pq.top()[0]+pq.top()[1]*pq.top()[1]) >= sqrt(point[0]*point[0]+point[1]*point[1])){
                if(pq.size() > k){
                    pq.pop();
                    pq.push(point);
                }else{
                    pq.push(point);
                }
            }
            */
        }
        while (!pq.empty()) {
            result.push_back(pq.top().second);
            pq.pop();
        }
        return result;
    }
};
