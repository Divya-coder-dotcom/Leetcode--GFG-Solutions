class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int m=image.size();
        int n=image[0].size();
        vector<vector<int>> vis(m,vector<int>(n,0));
        vector<vector<int>> ans(m,vector<int>(n));
        ans=image;
        queue<pair<pair<int,int>,int>> q;
        vis[sr][sc]=1;
        q.push({{sr,sc},image[sr][sc]});
        int dr[]={0,0,1,-1};
        int dc[]={1,-1,0,0};
        while(!q.empty())
        {
            int r=q.front().first.first;
            int c=q.front().first.second;
            int co=q.front().second;
            q.pop();
            ans[r][c]=color;
            for(int i=0;i<4;i++)
            {
                int nr=r+dr[i];
                int nc=c+dc[i];
                if(nr>=0 && nc>=0 && nr<m && nc<n && vis[nr][nc]==0 && image[nr][nc]==co)
                {
                    vis[nr][nc]=1;
                    q.push({{nr,nc},image[nr][nc]});
                }
            }
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna