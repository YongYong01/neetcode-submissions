class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        while(stones.size() > 1){
            int maxIndex1 = 0;
            int maxIndex2 = 1;
            if(stones[maxIndex2] > stones[maxIndex1]){
                swap(maxIndex1, maxIndex2);
            }
            for(int i = 2; i < stones.size(); i++){
                if(stones[i] > stones[maxIndex1]){
                    maxIndex2 = maxIndex1;
                    maxIndex1 = i;
                }else if(stones[i] > stones[maxIndex2]){
                    maxIndex2 = i;
                }
            }
            if(stones[maxIndex1] == stones[maxIndex2]){
                int first = max(maxIndex1, maxIndex2);
                int second = min(maxIndex1, maxIndex2);

                stones.erase(stones.begin() + first);
                stones.erase(stones.begin() + second);
            }else{
                int diff = stones[maxIndex1] - stones[maxIndex2];
                stones[maxIndex2] = diff;
                stones.erase(stones.begin() + maxIndex1);
            }
        }
        return stones.empty() ? 0 : stones[0];
        
    }
};
