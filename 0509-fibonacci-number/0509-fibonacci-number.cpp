class Solution {
public:
    int fib(int n) {
        int first=0;
        int second=1;
        int third;
        if(n==0)
        {
            return 0;
        }
        if(n==1)
        {
            return 1;
        }
        for(int i=2;i<=n;i++)
        {
            third=first+second;
            first=second;
            second=third;

        }
        return third;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna