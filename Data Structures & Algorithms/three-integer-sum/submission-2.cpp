class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> result;
        for(int i = 0; i < nums.size(); i++){
            if(i > 0 && nums[i] == nums[i - 1]){
                continue;
            }
            if(i + 1 < nums.size()){
                int j = i + 1;
                int k = nums.size() - 1;
                while(j < k){
                    if(nums[j] + nums[k] == -nums[i]){
                        result.push_back({nums[i], nums[j], nums[k]});
                        j++;
                        k--;
                        while(j < k && nums[j] == nums[j - 1]){
                            j++;
                        }
                        while(j < k && nums[k] == nums[k + 1]){
                            k--;
                        }
                    }else if(nums[j] + nums[k] > -nums[i]){
                        k--;
                    }else{
                        j++;
                    }
                }
            }else{
                break;
            }
        }
        return result;
    }
};
