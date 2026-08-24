class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        int lmax=0;
        int rmax=0;
        int ans=0;
        int l=0;
       int r=n-1;
        while(l<r)
        {
            if(height[l]<=height[r])
            {
                if(height[l]<lmax)
                {
                    ans+=lmax-height[l];
                }
                else
                {
                    lmax=height[l];
                }
                l++;
            }
            else
            {
                if(height[r]<rmax)
                {
                    ans+=rmax-height[r];
                }
                else
                {
                    rmax=height[r];
                }
                r--;
            }
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna