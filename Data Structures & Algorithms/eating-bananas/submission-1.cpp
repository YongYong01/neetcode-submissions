class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int left = 1;
        int right = *max_element(piles.begin(), piles.end());

        while(left <= right){
            long long count = 0;
            int mid = left + (right - left) / 2;
            for(int i = 0; i < piles.size(); i++){
                count += (piles[i] + (long long)mid - 1) / mid;
            }
            if(count > h){
                left = mid + 1;
            }else{
                right = mid - 1;
            }
            
        }
        return left;
    }
};
