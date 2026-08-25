class Solution {
public:
    int minimumLength(string s) {
        int n=s.length();
        int l=0;
        int h=n-1;
        while(l<h)
        {
            if(s[l]==s[h])
            {
                while(l<h && s[l]==s[l+1] )
                {
                    l++;
                }
                while(l<h && s[h]==s[h-1])
                {
                    h--;
                }
                
                l++;
                h--;
                if(h<l)
                {
                    return 0;
                }
            }
            else
            {
                break;
            }
        }
        
        int ans=h-l+1;
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna