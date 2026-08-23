class Solution {
public:
    int solve(vector<int>& nums, int i, int j, vector<vector<int>> &dp) {
        if (i > j) return 0;
        if (dp[i][j] != -1) return dp[i][j];
        int ans = INT_MAX;
        for (int k = i; k <= j; k++) {
            int temp =
                solve(nums, i, k - 1,dp) +
                solve(nums, k + 1, j,dp) +
                (nums[j+1]-nums[i-1]);
            ans = min(ans, temp);
        }
        return dp[i][j]= ans;
    }
    int minCost(int n, vector<int>& nums) {
        nums.insert(nums.begin(), 0);
        nums.push_back(n);
        int m = nums.size();
        sort(nums.begin(),nums.end());
        vector<vector<int>> dp(m, vector<int>(m, -1));
        return solve(nums, 1, m - 2,dp);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna