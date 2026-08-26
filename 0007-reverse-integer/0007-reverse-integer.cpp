class Solution {
public:
    int reverse(int x) {
        int ans=0;
        while(x!=0)
        {
            int digit=x%10;
            if(ans<(INT_MIN/10) || ans>(INT_MAX/10))
            {
                return 0;
            }
            else
            {
            ans=(ans*10)+digit;
            x=x/10;
            } 
        }
           return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna