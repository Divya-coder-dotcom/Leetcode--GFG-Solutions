class Solution {
public:
    int climbStairs(int n) {
        if(n==0 || n==1)
        {
            return 1;
        }
        int first=1;
        int second=1;
        int third;
        for(int i=2;i<=n;i++)
        {
            third=first+second;
            first=second;
            second=third;
        }
        return second;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna