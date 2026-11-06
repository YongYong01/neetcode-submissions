class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        for(int i = 0; i < nums.size(); i++){
            int num = nums.at(i);
            for(int j = i + 1; j < nums.size(); j++){
                if(num == nums.at(j)){
                    return true;
                }
            }
        }
        return false;
    }
};