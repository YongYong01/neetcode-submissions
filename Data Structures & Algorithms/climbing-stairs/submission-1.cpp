class Solution {
public:
    vector<int> memo = vector<int>(46, -1);

    int climbStairs(int n) {
        if(n <= 1){
            return 1;
        }

        if(memo[n] != -1){
            return memo[n];
        }

        memo[n] = climbStairs(n - 1)  + climbStairs(n - 2);

        return memo[n];
    }
};
