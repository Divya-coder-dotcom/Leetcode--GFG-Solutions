class Solution {
    private:
    void dfs(vector<vector<int>>& adj,vector<int>&v, int n,int i)
    {
        v[i]=1;
        for(auto j:adj[i])
           {
            if(v[j]==0)
            {
                dfs(adj,v,n,j);
            }
           }
    }
public:
    int findCircleNum(vector<vector<int>>& isConnected) 
    {
        int n=isConnected.size();
        vector<vector<int>> adj(n);
        vector<int> v(n,0);
    
        
        int ans=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(isConnected[i][j]==1 && i!=j)
                {
                    adj[i].push_back(j);
                    adj[j].push_back(i);
                }
            }
        }
       for(int i=0;i<n;i++)
       {
        if(v[i]==0)
        {    ans++;
            dfs(adj,v,n,i);
        }
       }
       return ans;
    }
    
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna