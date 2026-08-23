class Solution {
    int dp[301][301];
public:
    int solve(int i,int j,vector<int>& nums)
    {
        if(i>j)
        {
            return 0;
        }
        if(dp[i][j]!=-1)
        {
            return dp[i][j];
        }
        int sol;
        int ans=INT_MIN;
        for(int k=i;k<=j;k++)
        {
            sol=nums[i-1]*nums[j+1]*nums[k] + solve(i,k-1,nums)+solve(k+1,j,nums);
            ans=max(ans,sol);
        }
        return dp[i][j]=ans;
    }
    int maxCoins(vector<int>& nums) {
        nums.insert(nums.begin(),1);
        nums.push_back(1);
        int n=nums.size();
        memset(dp,-1,sizeof(dp));
        return solve(1,n-2,nums);
            }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna