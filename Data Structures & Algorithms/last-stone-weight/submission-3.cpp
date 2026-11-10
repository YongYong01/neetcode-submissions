class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> pq;
        for(int stone : stones){
            pq.push(stone);
        }
        while(pq.size() > 1){
            int largest = pq.top();
            pq.pop();
            int seclargest = pq.top();
            if(largest == seclargest){
                pq.pop();
            }else{
                pq.pop();
                pq.push(largest - seclargest);
            }
        }
        return pq.empty() ? 0 : pq.top();
    }
};
