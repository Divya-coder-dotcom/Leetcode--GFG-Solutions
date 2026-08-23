class Solution {
public:
    string shortestCommonSupersequence(string str1, string str2) {
        
        int m=str1.length();
        int n=str2.length();
        if(m==0)
        {
            return str2;
        }
        if(n==0)
        {
            return str1;
        }
        if(m==0 && n==0)
        {
            return str1;
        }
        
        int dp[m+1][n+1];
        string ans="";
        memset(dp,0,sizeof(dp));
        for(int i=1;i<=m;i++)
        {
            for(int j=1;j<=n;j++)
            {
                if(str1[i-1]==str2[j-1])
                {
                       dp[i][j]=1+ dp[i-1][j-1];

                }
                else
                {
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                }
                    
            }
        }
        while(m>0 && n>0)
        {
            if(str1[m-1]==str2[n-1])
            {
                ans+=str1[m-1];
                m--;
                n--;
            }
            else
            {
                 if(dp[m-1][n]>=dp[m][n-1])
                 {
                    ans+=str1[m-1];
                    m--;
                 }
                 else
                 {
                    ans+=str2[n-1];
                    n--;
                 }
            }
        }
        if(m>0)
        {
            while(m>0)
            {
                ans+=str1[m-1];
                m--;
            }
        }
        if(n>0)
        {
            while(n>0)
            {
                ans+=str2[n-1];
                n--;
            }
        }
         reverse(ans.begin(),ans.end());
         return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna