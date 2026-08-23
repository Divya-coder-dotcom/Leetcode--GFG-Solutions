class Solution {
public:
    bool judgeSquareSum(int c) {
        int low=0;
        int high=sqrt(c);
        long long cc=c;
        while(low<=high)
        {
            long long sum=(long long)low*low+high*high;
            if(sum==cc)
            {
                return true;
            }
            else if(sum>cc)
            {
                high--;
            }
            else
            {
                low++;
            }
        }
        return false;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna