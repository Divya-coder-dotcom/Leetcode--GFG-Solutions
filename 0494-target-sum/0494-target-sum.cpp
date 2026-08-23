class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) {
         int n=nums.size();
         int sum=0;
        for(int i=0;i<n;i++)
        {
          sum+=nums[i];
        }
        if((sum+target)%2!=0)
        {
            return 0;
        }
        int s1=(sum+abs(target))/2;
        int dp[n+1][s1+1];
        for(int i=0;i<n+1;i++)
        {
            for(int j=0;j<s1+1;j++)
            {
                if(i==0)
                {
                    dp[i][j]=0;
                }
                if(j==0)
                {
                    dp[i][j]=1;
                }
            }
        }
        for(int i=1;i<n+1;i++)
        {
            for(int j=0;j<s1+1;j++)
            {
                if(j>=nums[i-1])
                {
                    dp[i][j]=dp[i-1][j-nums[i-1]] + dp[i-1][j];
                }
                else
                
                {
                    dp[i][j]=dp[i-1][j];
                }
            }
        }
        return dp[n][s1];
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna