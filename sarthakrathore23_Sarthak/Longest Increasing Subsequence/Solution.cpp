class Solution {
public:
    int find(vector<int>& nums) {
        if (nums.empty()) 
        return 0;
        int max = 0;
        int res = 0;
        vector<pair<int, int>> dp(nums.size(), make_pair(1, 1));
        for (int i = 0; i < nums.size(); ++i) 
        {
            for (int j = 0; j < i; ++j) 
            {
                if (nums[i] > nums[j]) 
                {
                    if (dp[j].first + 1 == dp[i].first) 
                        dp[i].second += dp[j].second;
                    if (dp[j].first + 1 > dp[i].first)
                        dp[i] = make_pair(dp[j].first + 1, dp[j].second);
                }
            }
            if (max == dp[i].first) 
            {
                res += dp[i].second;
            } 
            else if (max < dp[i].first) 
            {
                max = dp[i].first;
                res = dp[i].second;
            }
        }
        
        return res;
    }
};