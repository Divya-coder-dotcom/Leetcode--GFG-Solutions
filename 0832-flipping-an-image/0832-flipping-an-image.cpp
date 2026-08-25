class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        
        int n=image.size();
        vector<vector<int>> ans=image;
        for(int i=0;i<n;i++)
        {
            int l=0;
            int h=n-1;
            while(l<h)
            {
                swap(ans[i][l],ans[i][h]);
                
                l++;
                h--;
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(ans[i][j]==0)
                {
                    ans[i][j]=1;
                }
                else
                {
                    ans[i][j]=0;
                }
            }
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna